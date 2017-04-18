## How to compile tshark binary for arm64 architechture android

### Clone this repository from github into your home directory
	cd ~
	git clone https://github.com/hasanbulat/tshark.git

### Prepare necessary package and tools
#### Run the following command to install compiling tools
	$ sudo apt update && sudo apt upgrade
	$ sudo apt install build-essential
	$ sudo apt install pkg-config automake autoconf libtool libtool-bin
	$ sudo apt install zlib1g-dev byacc flex libffi-dev

#### Download NDK tools https://dl.google.com/android/repository/android-ndk-r10e-linux-x86_64.zip
	$ wget https://dl.google.com/android/repository/android-ndk-r10e-linux-x86_64.zip

#### Create "tools" directory in your home directory
	$ mkdir tools

#### Run "make-standalone-toolchain" script
	$ cd tshark
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
- `cd ../libffi-3.2.1`
- `./configure --build=${BUILD_SYS} --host=aarch64 --prefix=${PREFIX} --enable-static`
- `make`
- `make install`

#### Compile gettext
- `cd ../gettext-0.19.8`
- `./configure --build=${BUILD_SYS} --host=aarch64  --prefix=${PREFIX} --disable-rpath --disable-libasprintf --disable-java --disable-native-java --disable-openmp --disable-curses`
- `make`
- `make install`

#### Compile Glib
- `cd ../glib-2.48.1`
- `./configure --build=${BUILD_SYS} --host=aarch64 --prefix=${PREFIX} --disable-dependency-tracking --cache-file=android.cache --enable-included-printf --enable-static --with-pcre=no`
- `make`
- `make install`

#### Compile libpcap
- `cd ../libpcap-1.8.1`
- `./configure --build=${BUILD_SYS} --host=aarch64 --prefix=${PREFIX} --with-pcap=linux`
- `make`
- `make install`
	
### Compile tshark
#### Run the following commands
- `cd ../wireshark-2.0.12`
- `./autogen.sh`
- `./conf-tshark`
- `make`
- `make install`
All binaries and libraries will be install in "~/android64" directory
