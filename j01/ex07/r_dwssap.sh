#!/bin/sh
cat /etc/passwd | sed "/#/d" | sed "1d;n;d" | cut -d : -f 1 | rev | sort -dr | head -n $FT_LINE2 | tail -n `echo "$FT_LINE2-$FT_LINE1+1" | bc` | sed "s/.*/&,/" | tr "\n" " " | rev | cut -c3- | rev | tr "\n" "."
