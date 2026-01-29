# ============================================================================
# FWOnline Zoneserver Makefile
# Generated from IDA Pro decompiled source
# ============================================================================

CC = gcc
CXX = g++
CFLAGS = -m32 -O2 -Wall -Wno-unused-variable -Wno-unused-but-set-variable
CXXFLAGS = $(CFLAGS)
LDFLAGS = -m32 -lpthread -lmysqlclient -lssl -lcrypto -lm -ldl

# Source files
SOURCES = zoneserver_clean.cpp
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = zoneserver_rebuilt

# Default target
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

# Dependencies
zoneserver_clean.o: zoneserver_clean.cpp types.h defs.h

.PHONY: all clean