@REM Windows Environment
@REM File name : clean.bat
@REM del : 삭제 명령어
@REM /s : 모든 하위 디렉터리에서 파일을 삭제합니다. 
@REM /q : 파일을 삭제할 것인지 묻는 메세지를 표시하지 않습니다.
cd ..
rmdir /q /s build
cd command_files
