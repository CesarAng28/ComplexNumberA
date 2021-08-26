

SOURCES := $(wildcard ./src/*.c) 



All = .PHONY main.out


.PHONY: 
	@echo ${SOURCES}


cesarin.out: unity.o main.o
	gcc -o $@ unity.o main.o

main.o: main.c
	gcc -c main.c

unity.o : ./src/unity.c
	gcc -c ./src/unity.c 

Clear: unity.o main.o
	rm main.o unity.o main.out