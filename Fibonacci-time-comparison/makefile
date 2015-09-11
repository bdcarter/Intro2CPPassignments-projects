PROGS := fibonacciR

all: $(PROGS)

fibonacciR: fibonacciR.o 
	g++ -g -std=c++0x -O3 fibonacciR.o -o fibonacciR

fibonacciR.o:
	g++ -c -std=c++0x fibonacciR.cpp
clean:
	rm -f ${PROGS} *.o *~
