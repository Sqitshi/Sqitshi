#!/usr/bin/env python3
import re
import sys

def parse_stabs_struct(line):
    match = re.match(r'^_?([A-Za-z_][A-Za-z0-9_]*):Tt\([^)]+\)=s(\d+)(.*)', line)
    if not match:
        return None
    
    name = match.group(1)
    size = int(match.group(2))
    fields_str = match.group(3)
    
    fields = []
    field_pattern = r'([A-Za-z_][A-Za-z0-9_]*):\([^)]+\),(\d+),(\d+);'
    for m in re.finditer(field_pattern, fields_str):
        field_name = m.group(1)
        bit_offset = int(m.group(2))
        bit_size = int(m.group(3))
        
        if bit_size == 8:
            c_type = "uint8_t"
        elif bit_size == 16:
            c_type = "int16_t" if field_name.startswith('s') and len(field_name) > 1 and field_name[1].isupper() else "uint16_t"
        elif bit_size == 32:
            c_type = "void*" if field_name.startswith('p') and len(field_name) > 1 and field_name[1].isupper() else "uint32_t"
        elif bit_size == 64:
            c_type = "uint64_t"
        else:
            c_type = f"uint8_t"
        
        fields.append({
            'name': field_name,
            'type': c_type,
            'bit_offset': bit_offset,
            'bit_size': bit_size,
            'byte_offset': bit_offset // 8
        })
    
    return {'name': name, 'size': size, 'fields': fields}

def generate_c_struct(struct):
    lines = []
    lines.append(f"/* Size: {struct['size']} bytes */")
    lines.append(f"typedef struct _{struct['name']} {{")
    
    for field in sorted(struct['fields'], key=lambda x: x['bit_offset']):
        byte_off = field['byte_offset']
        lines.append(f"    {field['type']} {field['name']};  /* offset: {byte_off} */")
    
    lines.append(f"}} {struct['name']};")
    lines.append("")
    return '\n'.join(lines)

# Main
stabs_file = sys.argv[1]
output_file = sys.argv[2]

structs = []
with open(stabs_file, 'r') as f:
    for line in f:
        struct = parse_stabs_struct(line.strip())
        if struct and struct['fields']:
            structs.append(struct)

print(f"Parsed {len(structs)} structures")

output = []
output.append("/* Auto-generated from STABS debug symbols */")
output.append("#ifndef _FWONLINE_STRUCTS_H_")
output.append("#define _FWONLINE_STRUCTS_H_")
output.append("")
output.append("#include <stdint.h>")
output.append("#pragma pack(push, 1)")
output.append("")

for struct in structs:
    output.append(generate_c_struct(struct))

output.append("#pragma pack(pop)")
output.append("#endif")

with open(output_file, 'w') as f:
    f.write('\n'.join(output))
print(f"Written to {output_file}")
