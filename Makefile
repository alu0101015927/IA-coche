all: test test_func

%: %.cpp
	g++ -std=c++11 $< -o $@

