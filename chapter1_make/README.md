mingw32 를 사용했을 때 debugging 모드가 제대로 동작하지 않았음.

1. Vscode에서 'Ctrl + Shift + p' 를 입력하여 'command pallete' 를 띄운다
2. cmake: configure 를 입력하면 아래와 같은 list 가 뜨는데 configure항목을 선택한다
3. ![image](https://user-images.githubusercontent.com/109014545/178133394-dff1ef95-38a3-42dc-b230-653d1716fb41.png)
4. [cmake] -- Build files have been written to: /경로/... 메세지가 뜨면 정상적으로 build 폴더가 만들어진 것이다.
5. ![image](https://user-images.githubusercontent.com/109014545/178133521-1b9dd4f6-d810-4a15-b0b5-383d567541cb.png)
5. 이제 cmake: build를 선택하여 build 한다.
6. build가 정상적으로 완료되면 "Build finished" 문구가 뜬다.
  [build] [100%] Built target hello
  [build] Build finished with exit code 0
7. cmake: debug 를 선택하여 debugging 모드를 실행시킨다
8. Vscode Terminal 창에 Hello world가 printf 된다
9. ![image](https://user-images.githubusercontent.com/109014545/178133558-ee806ca9-6736-441c-abd0-4e2bd5dd76f6.png)
