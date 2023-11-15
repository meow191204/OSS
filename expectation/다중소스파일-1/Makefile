power: power.o main.o
	gcc -o power power.o main.o

main.o: main.c power.h
	gcc -c main.c

power.o: power.c power.h
	gcc -c power.c

clean:
	rm *.o power