
ciel_floor.out : main.o ciel.o floor.o read_write.o
	time clang -o ciel_floor.out *.o

main.o : main.c ciel_floor.h
	time clang -c main.c

ciel.o : ciel.c ciel_floor.h
	time clang -c ciel.c

floor.o : floor.c ciel_floor.h
	time clang -c floor.c

read_write.o : read_write.c ciel_floor.h
	time clang -c read_write.c

clean :
	rm *.o ciel_floor.out
