all: lab12
lab12: main.o main.h circle.o pixel.o rectangle.o triangle.o
	g++ -o main.o -c main.cpp
	g++ -o circle.o -c circle.cpp
	g++ -o pixel.o -c pixel.cpp 
	g++ -o rectangle.o -c rectangle.cpp
	g++ triangle.o -c triangle.cpp
	g++ -o lab12 main.o circle.o pixel.o rectangle.o triangle.o 
clean:
	rm lab12
