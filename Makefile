all: ratdemo

ratdemo: main.o rational.o
	g++ -o ratdemo main.o rational.o

main.o : main.cpp rational.h
	g++ -c -main.o main.cpp

rational.o: rational.h rational.cpp
	g++ -c -rational.o rational.cpp
clean:
	rm -f ratdemo
	rm -f main.o
	rm -f rational.o
