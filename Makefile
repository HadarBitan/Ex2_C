
.PHONY: all

all: lib.a main.o
	gcc -Wall -g -o connections main.o my_mat.o

connections: lib.a main.o
	gcc -Wall -g -o main.o my_mat.o connections

lib.a: my_mat.o
	gcc rcs -o lib.a my_mat.o

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g) -c my_mat.c 

main.o: main.c my_mat.h
	gcc -Wall -g -c main.c

run:
	gcc my_mat.c
	./a.out


clean:
	rm -f *.o *.a *.so *.out connections