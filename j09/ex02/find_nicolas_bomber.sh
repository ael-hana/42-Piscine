#!/bin/sh
cat $1 | grep -i "bomber\t" | grep -i "nicolas\t" | grep -o '[0-9]\+'
