CXX = g++
CXXFLAGS = -std=c++11 -Wall -g

# === TWO PROGRAMS ===
# 1. playlist - Poor version (for students to critique)
# 2. demo     - Improved version (demonstrates good practices)

# Poor version (Activity 1A)
POOR_TARGET = playlist
POOR_SOURCES = main.cpp
POOR_OBJECTS = main.o

# Improved version (Activity 1B onwards)
IMPROVED_TARGET = demo
IMPROVED_SOURCES = demo.cpp CustomList.cpp
IMPROVED_OBJECTS = $(IMPROVED_SOURCES:.cpp=.o)
HEADERS = CustomList.h

# Default target - build BOTH programs
all: $(POOR_TARGET) $(IMPROVED_TARGET)

# === POOR VERSION (for critique) ===
$(POOR_TARGET): $(POOR_OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(POOR_TARGET) $(POOR_OBJECTS)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

# === IMPROVED VERSION (demonstration) ===
$(IMPROVED_TARGET): $(IMPROVED_OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(IMPROVED_TARGET) $(IMPROVED_OBJECTS)

# Compile improved version .cpp files (with header dependencies)
demo.o: demo.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c demo.cpp -o demo.o

CustomList.o: CustomList.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c CustomList.cpp -o CustomList.o

# === UTILITY TARGETS ===

# Clean up all compiled files
clean:
	rm -f $(POOR_OBJECTS) $(POOR_TARGET) $(IMPROVED_OBJECTS) $(IMPROVED_TARGET)

# Run the poor version
run-poor: $(POOR_TARGET)
	./$(POOR_TARGET)

# Run the improved version
run-demo: $(IMPROVED_TARGET)
	./$(IMPROVED_TARGET)

# === MEMORY LEAK DETECTION ===

# FOR STUDENTS IN LAB (CSIL Linux machines):
# Use valgrind to check for memory leaks
valgrind-poor: $(POOR_TARGET)
	valgrind --leak-check=full --show-leak-kinds=all ./$(POOR_TARGET)

valgrind-demo: $(IMPROVED_TARGET)
	valgrind --leak-check=full --show-leak-kinds=all ./$(IMPROVED_TARGET)


# Note: Leak detection tools don't work reliably on modern macOS, SSH to CSIL to run valgrind

# Phony targets (not actual files)
.PHONY: all clean run-poor run-demo
.PHONY: valgrind-poor valgrind-demo 
