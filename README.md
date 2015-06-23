boostr_lib
==========

C++ library to expose Boost functions into a ruby gem.  This is a proof of concept.

## Notes

- Ruby Native Extenstions in C/C++
- Extensions with FFI
- Intro to Boost C++ Libraries
- Boost C++ libraries *must* be compiled with gcc-4.9
- boost_lib *must* be compiled and linked with gcc-4.9
- Upgrading gcc-4.8 to 4.9 on Ubuntu
- Notes on how to upgrade Ubuntu to [gcc-4.9](http://askubuntu.com/questions/466651/how-do-i-use-the-latest-gcc-4-9-on-ubuntu-14-04)

## Technical Notes
### Building Boost
`./bootstrap.sh   --prefix=/home/mthomas/boost`

`./b2  install --toolset=gcc  --link=static  threading=multi`

