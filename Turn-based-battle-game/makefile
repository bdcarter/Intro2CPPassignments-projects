PROGS := game

all: $(PROGS)

game: Creatures.o Barbarian.o ReptilePeople.o BlueMen.o Shadow.o Goblin.o
	g++ -g Creatures.o Barbarian.o ReptilePeople.o BlueMen.o Shadow.o Goblin.o -o game

Creatures.o: Creatures.cpp Creatures.hpp
	g++ -c Creatures.cpp

Barbarian.o: Barbarian.cpp Barbarian.hpp
	g++ -c Barbarian.cpp

ReptilePeople.o: ReptilePeople.cpp ReptilePeople.hpp
	g++ -c ReptilePeople.cpp

BlueMen.o: BlueMen.cpp BlueMen.hpp
	g++ -c BlueMen.cpp

Shadow.o: Shadow.cpp Shadow.hpp
	g++ -c Shadow.cpp

Goblin.o: Goblin.cpp Goblin.hpp
	g++ -c Goblin.cpp

clean:
	rm -f ${PROGS} *.o *~
