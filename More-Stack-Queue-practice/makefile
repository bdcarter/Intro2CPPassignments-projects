PROGS := lab8

all: $(PROGS)

lab8: Menu.o Stack.o Queue.o
	g++ -g Menu.o Stack.o Queue.o -o lab8

Menu.o: Menu.cpp
	g++ -c Menu.cpp

Stack.o: Stack.hpp Stack.cpp
	g++ -c Stack.cpp

Queue.o: Queue.cpp Queue.hpp
	g++ -c Queue.cpp

clean:
	rm -f ${PROGS} *.o *~
