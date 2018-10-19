CC=g++
CXXFLAGS=-I$(IDIR) -std=c++11 -g

ODIR=../src
IDIR=../include


_OBJ = car.o terrain.o mediator.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

all:main

$(ODIR)/car.o: $(ODIR)/car.cpp  
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/terrain.o: $(ODIR)/terrain.cpp  
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/mediator.o: $(ODIR)/mediator.cpp  
	$(CC) -c -o $@ $< $(CFLAGS)

main.o: $(ODIR)/main.cpp
	$(CC) -c -o $@ $< $(CFLAGS)
	
main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o 
