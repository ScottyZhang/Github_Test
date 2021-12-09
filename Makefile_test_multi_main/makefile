CC = gcc

all: main_findMax main_myPrint

main_findMax: main_findMax.c find_max.o
	$(CC) main_findMax.c find_max.o  -o main_findMax

main_myPrint: main_myPrint.c my_print.o
	$(CC) main_myPrint.c find_max.o my_print.o -o main_myPrint

find_max.o: find_max.c
	$(CC) -c find_max.c

my_print.o: my_print.c
	$(CC) -c my_print.c

clean:
	rm *.o main_findMax main_myPrint