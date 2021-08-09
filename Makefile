CXX = g++
FLAGS = -std=c++20 -O2 -g -I . -I include -Wall -Wextra -pedantic

main:
	$(CXX) $(FLAGS) -c src/Node.cpp
