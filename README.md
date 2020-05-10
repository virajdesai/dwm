# dwm - dynamic window manager
Build of a fast, small, and dynamic window manager for X.

### Requirements
In order to build st you need the Xlib header files.

### Installation
Edit config.mk to match your local setup (st is installed into the /usr/local namespace by default).
Afterwards enter the following command to build and install dwm (if necessary as root):
```
 # make clean install
```

### Running dwm
Add the following line to your .xinitrc to start dwm using startx:
```sh
 exec dwm
```
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
alpha, dmenumatchtop, fancybar, statuscmd-signal, tilegap
