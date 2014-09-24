#!bin/sh
ldapsearch -Q objectclass = apple-user | cut -c 5- | grep uid | cut -d , -f 1 | cut -d = -f 2 | sort -drf
