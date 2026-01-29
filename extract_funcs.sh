#!/bin/bash
readelf -s /mnt/d/FWODEV/FWODEV/Zoneserver/zoneserver 2>/dev/null | grep " FUNC " | grep -v "UND" | awk '{print $NF}' | c++filt > /mnt/d/FWODEV/FWODEV/Zoneserver/src/functions.txt
echo "Done: $(wc -l < /mnt/d/FWODEV/FWODEV/Zoneserver/src/functions.txt) functions"