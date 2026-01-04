# Lecture 1: CustomList - Introduction to ADTs

## Overview
This lecture introduces proper C++ practices for building Abstract Data Types using a linked list as an example.

---

## Files in This Directory

### Activity 1A: Critique Poor Implementation (7 mins)
- **File:** `main.cpp`
- **Purpose:** Analyze and identify problems with a flawed linked list implementation
- **Task:** Find at least 5 specific problems with this code

### Improved Implementation (Your Reference)
- **Files:** `CustomList.h`, `CustomList.cpp`, `demo.cpp`
- **Purpose:** Demonstrates proper C++ practices
- **Key Improvements:**
  - Private data members (proper encapsulation)
  - Tail pointer for O(1) push_back
  - Const-correct parameters
  - Operator overloading

---

## Compiling and Running

### Build both programs
```bash
make              # Builds both playlist (poor) and demo (improved)
```

### Run the poor version
```bash
make playlist     # Build poor version
./playlist        # Run it
```

### Run the improved version
```bash
make demo         # Build improved version
./demo            # Run it
```

### Clean up
```bash
make clean
```

---

## Key Concepts Covered

### 1. Initializer Lists
Proper way to initialize member variables in constructors:
```cpp
CustomList() : head(nullptr), tail(nullptr) { }
```

### 2. Efficiency with Tail Pointer
Using a tail pointer makes `push_back()` O(1) instead of O(n).

### 3. Operator Overloading
Implementing `operator<<` for natural syntax:
```cpp
cout << myList;  // Natural and readable!
```

### 4. Const Correctness
Using `const string&` parameters to avoid unnecessary copying.

---

## What You'll Learn

By the end of this lecture, you should be able to:
- Use initializer lists in constructors
- Explain the efficiency benefit of a tail pointer
- Implement operator overloading for custom classes
- Identify when a class needs proper memory management (preview for Lecture 2)

---

## Looking Ahead

This implementation still has a critical problem: **no destructor**!
This means memory leaks. We'll fix this in **Lecture 2** with The Big Three.

---

## Questions?

If you're stuck:
- Review the comparison between `main.cpp` and the improved version
- Focus on understanding WHY each change was made
- Draw memory diagrams to visualize the data structures
