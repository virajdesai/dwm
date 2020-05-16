#!/bin/sh
case $BUTTON in
	1) pac next-sink && pkill -RTMIN+5 dwmblocks;;
esac
echo $(pac output)
