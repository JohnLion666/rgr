all: clean  LinkedList.o main.o 
	g++ main.o LinkedList.o  -o rgr

file: 
	g++ main.o LinkedList.o  -o rgr

element.o: cleanElement
	g++ -c element.cpp

LinkedList.o: cleanList
	g++ -c LinkedList.cpp
main.o: cleanMain
	g++ -c main.cpp

cleanElement:
	rm -f element.o

cleanList:
	rm -f LinkedList.o

cleanMain:
	rm -f main.o

clean:
	rm -rf *.o 