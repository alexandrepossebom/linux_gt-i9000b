#!/bin/sh

export KBUILD_BUILD_VERSION="1"

cd Kernel 2>/dev/null
nice -n 20 make -j2
cd ..
cp Kernel/arch/arm/boot/zImage .

tar cvf voodoo.tar zImage
ls -lh zImage
