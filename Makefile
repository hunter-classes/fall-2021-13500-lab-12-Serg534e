main: main.o funcs.o
	g++ -std=c++11 -o main main.o funcs.o
tests: tests.o funcs.o
	g++ -std=c++11 -o tests tests.o funcs.o
tests.o: tests.cpp doctest.h funcs.h
	g++ -std=c++11 -c tests.cpp
main.o: main.cpp funcs.h
	g++ -std=c++11 -c main.cpp
funcs.o: funcs.cpp funcs.h
	g++ -std=c++11 -c funcs.cpp
clean:
	rm -f main.o funcs.o tests.o
