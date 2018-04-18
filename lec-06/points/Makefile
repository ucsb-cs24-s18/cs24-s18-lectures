all: testpoint

testpoint: point.o test.o
	g++ -o testpoint point.o test.o

point.o: point.cpp point.h
	g++ -c point.cpp

test.o: test.cpp point.h
	g++ -c test.cpp	

clean:
	rm *.o testpoint