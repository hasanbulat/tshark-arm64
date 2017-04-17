#!/bin/sh
# Android cross-compile environment setup script for Wireshark
# Author  : Zengwen Yuan
# Date    : 2016-07-16
# Version : 2.0

# All the sources and installed libs will be here
export DEV=${HOME}/tools

# This is just an empty directory where I want the built objects to be installed
export PREFIX=${HOME}/android64

# Don't mix up .pc files from your host and build target
export PKG_CONFIG_PATH=${PREFIX}/lib/pkgconfig

# GCC for Android version to use
# 4.9 is the only available version since NDK r11!
export GCC_VER=4.9

# The building system we are using -- Linux arch
export BUILD_SYS=x86_64-linux-gnu

# Set Android target API level
export ANDROID_API=21

# Set Android target arch
export ANDROID_ARCH=arm64

# Set Android target name, according to Table 2 in
# https://developer.android.com/ndk/guides/standalone_toolchain.html
# export ANDROID_TARGET=armv5te-none-linux-androideabi

# The cross-compile toolchain we use
export TOOLCHAIN=aarch64-linux-android

# This is a symlink pointing to the latest Android NDK r12b
export NDK=${DEV}/android-ndk

# The path of standalone NDK toolchain
# Refer to https://developer.android.com/ndk/guides/standalone_toolchain.html
export NDK_TOOLCHAIN=${DEV}/android64-ndk-toolchain

# Set Android Sysroot according to API and arch
export SYSROOT=${NDK_TOOLCHAIN}/sysroot
# this one is the absolute, prebuilt path
# export SYSROOT=${NDK}/platforms/android-${ANDROID_API}/arch-${ANDROID_ARCH}

# Binutils path
export CROSS_PREFIX=${NDK_TOOLCHAIN}/bin/${TOOLCHAIN}
# this one is the absolute, prebuilt path
# export CROSS_PREFIX=${NDK}/toolchains/${TOOLCHAIN}-${GCC_VER}/prebuilt/linux-x86_64/bin/${TOOLCHAIN}

# Non-exhaustive lists of compiler + binutils
export AR=${CROSS_PREFIX}-ar
export AS=${CROSS_PREFIX}-as
export LD=${CROSS_PREFIX}-ld
export NM=${CROSS_PREFIX}-nm
export CC=${CROSS_PREFIX}-gcc
export CXX=${CROSS_PREFIX}-g++
export CPP=${CROSS_PREFIX}-cpp
export CXXCPP=${CROSS_PREFIX}-cpp
export STRIP=${CROSS_PREFIX}-strip
export RANLIB=${CROSS_PREFIX}-ranlib
export STRINGS=${CROSS_PREFIX}-strings

# Needed for Wireshark building
export CC_FOR_BUILD="/usr/bin/cc"

# Make sure GLib's installation path is included in $PATH
export PATH=$PATH:${PREFIX}/bin:${PREFIX}/lib:${PREFIX}/lib64

# Set build flags
export CFLAGS="--sysroot=${SYSROOT} -I${SYSROOT}/usr/include -I${PREFIX}/include"
export CPPFLAGS="--sysroot=${SYSROOT} -I${SYSROOT}/usr/include -I${NDK_TOOLCHAIN}/include/c++/"
export LDFLAGS="${LDFLAGS} -L${SYSROOT}/usr/lib -L${PREFIX}/lib -L${NDK_TOOLCHAIN}/lib"
