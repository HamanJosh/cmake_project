# Linux Environment
# File name : build.sh
#! /bin/sh
cd ..
cmake -DGLFW_BUILD_DOCS=OFF -S . -B build
cd command_files
