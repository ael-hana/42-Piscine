#!/bin/sh
ldapsearch -Q name | grep cn | cut -d : -f 2 | cut -c2- | tr " " ":" | cut -d : -f 2 | grep BON | wc -l | rev | cut -d " " -f 1 | rev
