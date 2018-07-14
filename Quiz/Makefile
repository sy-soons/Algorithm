.SUFFIXES : .c .cpp .o

OBJECTS	=	main.o DisplayManager.o
SRCS = main.cpp DisplayManager.cpp

CXX = g++
CPPFLAGS = -lstring

all: main
main : $(OBJECTS)
	$(CXX) -o main $(OBJECTS)
clean:
	rm -rf $(OBJECTS) $(TARGET)
