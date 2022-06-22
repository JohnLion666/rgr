all: clean LinkedList.o main.o 
	g++ main.o LinkedList.o -o rgr

file: 
	g++ main.o LinkedList.o -o rgr

LinkedList.o: cleanList
	g++ -c LinkedList.cpp
main.o: cleanMain
	g++ -c main.cpp

cleanList:
	rm -f LinkedList.o

cleanMain:
	rm -f main.o

clean:
	rm -rf *.o 