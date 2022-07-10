# Linux Environment
# File name : build.sh
#! /bin/sh
cmake -S . -B build


# @REM Windows Environment
# @REM File name : build.bat
# @REM GLFW_BUILD_DOCS 옵션을 OFF 시킴
# cmake -DGLFW_BUILD_DOCS=OFF -S . -B build