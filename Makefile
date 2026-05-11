compile: main.c .\src\loading.c .\src\vm.c .\src\fetch.c .\src\decode.c
	gcc main.c .\src\loading.c .\src\vm.c .\src\fetch.c .\src\decode.c -Iinclude -o main.exe