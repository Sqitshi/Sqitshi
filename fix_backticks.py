import re
import sys

with open('/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c', 'r', encoding='latin-1') as f:
    content = f.read()

# Ersetze Backtick-Ausdr?cke
content = re.sub(r'`[^`]*`', '_vtbl_ptr', content)

with open('/mnt/d/FWODEV/FWODEV/Zoneserver/src/zoneserver_ida.c', 'w', encoding='latin-1') as f:
    f.write(content)

print("Backticks ersetzt")
