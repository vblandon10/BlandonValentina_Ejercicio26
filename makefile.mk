primero.x: primero
	c++ primero.cpp -o primero.x
	./primero.x 10
	rm primero.x
segundo.x: segundo
	c++ segundo.cpp -o segundo.x
	./segundo.x uno.txt dos.txt
	rm segundo.x

all: primero.x segundo.x