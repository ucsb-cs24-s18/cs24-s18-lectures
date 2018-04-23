# Makefile
all: testlist testrest

testlist: testlist.o intlist.o
	g++ -g -o testlist testlist.o intlist.o

testrest: testrest.o intlist.o
	g++ -g -o testrest testrest.o intlist.o

testlist.o: testlist.cpp
	g++ -c -g testlist.cpp

testrest.o: testrest.cpp
	g++ -c -g testrest.cpp

intlist.o: intlist.cpp
	g++ -c -g intlist.cpp

clean:
	rm -f testrest testlist *.o
