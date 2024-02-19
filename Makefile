CPP=g++
CFLAGS=-lraylib
CPATH=-I./include

build:
	$(CPP) $(CPATH) ./src/*.cpp $(CFLAGS) -o rayui
