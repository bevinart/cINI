CFLAGS=-g -I./include
CC=gcc $(CFLAGS)

test.exe: ./src/main.c ./src/ini.o
	$(CC) -o $@ $^

./src/ini.o: ./src/ini.c ./include/ini.h
	$(CC) -o $@ -c ./src/ini.c

.PHONY: all
all:
	make test
	make pcc
.PHONY: pcc
pcc:
	rm -rf ./src/ini.o
.PHONY: clean
clean:
	rm -rf test ./src/ini.o