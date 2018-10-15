#!/bin/sh


modprobe irqbypass
insmod kvm.ko
insmod kvm-intel.ko
