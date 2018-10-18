CC=g++ 
CXXFLAGS=-std=c++11

OBJS = main.o terrain.o

all: ${OBJS}
	$(CC) $(CXXFLAGS) -o main ${OBJS}

clean: 
	rm -rf *.o main
