# Webassembly Linux Interface (Musl Libc)

This repo contains exploratory work towards creating a standard Linux syscall API for 
Webassembly. We build off of the base code of [musl libc](https://github.com/bminor/musl)

Refer to the parent [WALI](https://github.com/arjunr2/WALI) repository on a complete overview of using and testing WALI

NOTE: We currently support x86-64, aarch64, and riscv64 architectures. Future work will expand support

## Prerequisites

* Custom [clang](https://github.com/llvm/llvm-project/releases?page=3) is required for WALI compilation.
Build llvm as shown in parent WALI directory, and add the `bin` directory to your PATH.

* [Webassembly Binary Toolkit](https://github.com/WebAssembly/wabt/releases)


## Building wali libc

The build/installation process mostly mirrors that of musl and is detailed in the 
[INSTALL](https://github.com/arjunr2/wali-musl/blob/master/INSTALL) file.

The `config.mak` file performs environment configuration for the build.
Default values are made to be compatible with setup guide in parent [WALI](https://github.com/arjunr2/WALI) repo.
If the WALI compiler is installed independently, substitute the path as shown below:
```shell
# This version of config.mak was generated by:
# ./configure
# Any changes made here will be lost if configure is re-run
ARCH = wasm32
AR = $(CROSS_COMPILE)ar
RANLIB = $(CROSS_COMPILE)ranlib
CC = <path-to-llvm-bin>/clang
CROSS_COMPILE = <path-to-llvm-bin>/llvm-
```


