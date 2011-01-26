GT-I9000 is launched in many contries, including European and Latin American contries.
S/W is almost the same but there are some differences between the European version and the Latin American version.
The open source codes to be open here are only the differences.

Note that the Latin American contries mentioned here include Brazil, Argentina, Chile, Peru, Mexico, Colombia, Venezuela and some Carribean countries.


How to build:

< Platform > 
The Platform is the same as that of the European version.

Get GT-I9000 open source.
    : GT-I9000_OpenSource_Froyo_update_JPM.zip
    ( Download site : http://opensource.samsung.com )

      Unzip it, then you will see the file GT-I9000_Platform.tar.gz which includes the Android source code.

 
< Kernel > 
1. Get GT-I9000 open source code:
    - GT-I9000_OpenSource_Froyo_update_JPM.zip
    ( Download site : http://opensource.samsung.com )

      Unzip it, then you will see the file GT-I9000_Kernel.tar.gz which includes the kernel source code.

2. Overwrite GT-I9000B Kernel open source code from the Latin American version to Europea kernel open source code.

3. move into the Kernel/ directory

4. Execute 'make aries_latinb_defconfig'.

5. Execute 'make' or 'make -j<n>' where '<n>' is the number of multiple jobs to be invoked simultaneously.

6. If the kernel is built successfully, you will find following files from the top directory:
	arch/arm/boot/zImage
	net/netfilter/xt_TCPMSS.ko
	drivers/onedram_svn/modemctl/modemctl.ko
	drivers/onedram_svn/onedram/onedram.ko
	drivers/onedram_svn/svnet/svnet.ko
	drivers/bluetooth/bthid/bthid.ko
	drivers/net/wireless/bcm4329/dhd.ko
	drivers/scsi/scsi_wait_scan.ko
	drivers/samsung/fm_si4709/Si4709_driver.ko
	drivers/samsung/vibetonz/vibrator.ko
	
¡Ø If you need any tool chain to build Kernel,
   Please visit http://www.codesourcery.com/, download and install Sourcery G++ Lite 2009q3-68 toolchain for ARM EABI.
	