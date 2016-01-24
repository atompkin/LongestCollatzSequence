ll -ansi -pedantic -g -O2 -c main.o

main.o : main.cpp rational.h
        g++ g++ -Wall -ansi -pedantic -g -O2 -c main.cpp

rational.o: rational.h rational.cpp
        g++ -Wall -ansi -pedantic -g -O2 -c rational.h
