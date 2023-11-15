stats: stats.o main.o battle.o
	gcc -o stats stats.o main.o battle.o
main.o: main.c stats.h battle.h
	gcc -c main.c
stats.o: stats.c stats.h
	gcc -c stats.c
battle.o: battle.c battle.h stats.h
	gcc -c battle.c
clean:
	rm *.o stats