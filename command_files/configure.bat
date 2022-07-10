@REM Windows Environment
@REM File name : build.bat
@REM GLFW_BUILD_DOCS 옵션을 OFF 시킴
cd ..
cmake -DGLFW_BUILD_DOCS=OFF -S . -B build
cd command_files
