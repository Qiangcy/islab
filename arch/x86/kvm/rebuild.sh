#!/bin/sh
make -C /lib/modules/`uname -r`/build M=`pwd` clean
make -C /lib/modules/`uname -r`/build M=`pwd` modules
