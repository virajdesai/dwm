# dwm - dynamic window manager
Build of a fast, small, and dynamic window manager for X.

### Requirements
In order to build st you need the Xlib header files.
Fonts: DejaVu Sans Condensed, Wuncon Siji (For glyphs)

### Installation
Edit config.mk to match your local setup (dwm is installed into the /usr/local namespace by default).
Afterwards enter the following command to build and install dwm (if necessary as root):
```sh
 # make clean install
```

### Running dwm
If using startx, add start.sh to ~/.xinitrc.
If using a display/login manager, a dwm.desktop file can be created and added to /usr/share/xsessions which calls start.sh. 

In order to display status info in the bar, dwmblocks is available. It can also be done my modifying X root window name with a simple script:
```sh
 #!/bin/sh
 while xsetroot -name "`date` `uptime | sed 's/.*,//'`"
 do
	 sleep 1
 done &
 exec dwm
```

### Patches
alpha, fancy bar, monocle symbol, pertag, gaps

Indicator dots have been changed to periods.
Monocle mode does not have the border.
