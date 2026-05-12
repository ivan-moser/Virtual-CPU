compile: main.c .\src\loading.c .\src\vm.c .\src\fetch.c .\src\decode.c .\src\execute.c
	gcc main.c .\src\loading.c .\src\vm.c .\src\fetch.c .\src\decode.c .\src\execute.c -Iinclude -o main.exe