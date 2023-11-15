rect: rect.o main.o
	gcc -o rect rect.o main.o

main.o: main.c rect.h
	gcc -c main.c

rect.o: rect.c rect.h
	gcc -c rect.c

clean:
	rm *.o rect