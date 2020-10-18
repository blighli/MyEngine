if exist ..\build rmdir /q /s ..\build
mkdir ..\build
cd ..\build
cmake .. -G "MinGW Makefiles"
