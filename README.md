## How to compile tshark binary for arm64 architecture android devices

### Clone this repository from github into your home directory
	$ cd ~
	$ git clone https://github.com/hasanbulat/tshark.git

### Prepare necessary package and tools
#### Run the following command to install compiling tools
	$ sudo apt update && sudo apt upgrade
	$ sudo apt install build-essential
	$ sudo apt install pkg-config automake autoconf libtool libtool-bin
	$ sudo apt install zlib1g-dev byacc flex libffi-dev
	
#### Create "tools" directory in your home directory
	$ mkdir tools

#### Download and unzip NDK tools https://dl.google.com/android/repository/android-ndk-r10e-linux-x86_64.zip using command
	$ cd tools
	$ wget https://dl.google.com/android/repository/android-ndk-r10e-linux-x86_64.zip
	$ unzip android-ndk-r10e-linux-x86_64.zip

#### Run "make-standalone-toolchain" script
	$ cd ~/tshark
	$ ./make-standalone-toolchain
aarch64-linux-android-4.9 standalone toolchain will be install in tools/android64-ndk-toolchain directory

### Compile dependencies libraries
#### Run these following command to setup environments variables
	$ source ~/tshark/set-env-glib.sh

#### Compile libiconv
	$ cd source/libiconv-1.15
	$ ./configure --build=${BUILD_SYS} --host=aarch64 --prefix=${PREFIX} --disable-rpath
	$ make
	$ make install

#### Compile libffi
	$ cd ../libffi-3.2.1
	$ ./configure --build=${BUILD_SYS} --host=aarch64 --prefix=${PREFIX} --enable-static
	$ make
	$ make install

#### Compile gettext
	$ cd ../gettext-0.19.8
	$ ./configure --build=${BUILD_SYS} --host=aarch64  --prefix=${PREFIX} --disable-rpath --disable-libasprintf --disable-java --disable-native-java --disable-openmp --disable-curses
	$ make
	$ make install

#### Compile Glib
	$ cd ../glib-2.48.1
	$ ./configure --build=${BUILD_SYS} --host=aarch64 --prefix=${PREFIX} --disable-dependency-tracking --cache-file=android.cache --enable-included-printf --enable-static --with-pcre=no
	$ make
	$ make install

#### Compile libpcap
	$ cd ../libpcap-1.8.1
	$ ./configure --build=${BUILD_SYS} --host=aarch64 --prefix=${PREFIX} --with-pcap=linux
	$ make
	$ make install
	
### Compile tshark
#### Run the following commands
	$ source ~/tshark/set-env-tshark.sh
	$ cd ../wireshark-2.0.12
	$ ./autogen.sh
	$ ./conf-tshark
	$ make
	$ make install
All binaries and libraries will be install in "~/android64" directory

### Testing
Copy "tshark" and "dumpcap" binaries in wireshark-2.0.12 directory to "/data" directory on your android devices then using adb to access android shell (root access required on android devices)
- `$ cd /data`
- `$ ./tshark --version`

if tshark working correctly, you will see output like this:

Running as user "root" and group "root". This could be dangerous.
TShark (Wireshark) 2.0.12 (Git Rev Unknown from unknown)

Copyright 1998-2017 Gerald Combs <gerald@wireshark.org> and contributors.
License GPLv2+: GNU GPL version 2 or later <http://www.gnu.org/licenses/old-licenses/gpl-2.0.html>
This is free software; see the source for copying conditions. There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

Compiled (64-bit) with libpcap, without POSIX capabilities, without libnl, with
libz 1.2.3, with GLib 2.48.1, without SMI, without c-ares, without ADNS, without
Lua, without GnuTLS, without Gcrypt, without Kerberos, without GeoIP.

Running on Linux 3.18.20-v01+, with locale C, with libpcap version 1.8.1, with
libz 1.2.8.

Built using gcc 4.9 20140827 (prerelease).
