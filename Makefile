CC=g++ 
CXXFLAGS=-std=c++11

OBJS = test.o test_func.o

all: ${OBJS}
	$(CC) $(CXXFLAGS) -o test ${OBJS}

clean: 
	rm -rf *.o test