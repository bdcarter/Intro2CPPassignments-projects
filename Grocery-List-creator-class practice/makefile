CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=Item.cpp List.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=List

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@


