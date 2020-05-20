#!/bin/sh
xset m 0 0
xset +fp /home/viraj/.local/share/fonts
xset fp rehash
feh --bg-scale ~/Road.jpg &
picom -cCGfF -o 0.38 -O 200 -I 200 -t 0 -l 0 -r 3 -D2 -m 0.88 &
dwmblocks &
exec dwm
