
CC = clang

ciel_floor.out : main.o ciel.o floor.o read_write.o
	time $(CC) *.o -o ciel_floor.out

main.o : main.c ciel_floor.h
	time $(CC) -c main.c

ciel.o : ciel.c ciel_floor.h
	time $(CC) -c ciel.c

floor.o : floor.c ciel_floor.h
	time $(CC) -c floor.c

read_write.o : read_write.c ciel_floor.h
	time $(CC) -c read_write.c

clean :
	rm *.o ciel_floor.out
