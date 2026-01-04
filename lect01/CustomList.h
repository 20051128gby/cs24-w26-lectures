#ifndef CUSTOMLIST_H
#define CUSTOMLIST_H

#include <string>
#include <iostream>

using namespace std;

/**
 * CustomList - A singly linked list implementation
 *
 * This is the IMPROVED version demonstrated in lecture.
 * Key improvements over the initial version:
 * - Private head and tail (proper encapsulation)
 * - Tail pointer for O(1) push_back
 * - Proper const methods
 * - Operator overloading for natural syntax
 */
class CustomList {
public:
    // Constructor - Initializes an empty list
    CustomList();
   
    // Constructor with initializer list for easy creation
    CustomList(std::initializer_list<string> init);

    // Destructor - Will be implemented in Lecture 2!
    // ~CustomList();

    // Add an element to the end of the list - O(1) with tail pointer
    void push_back(const string& val);

    // Print all elements - students will implement this!
    void print() const;

    // TODO: Implement operator<< for natural printing syntax
    // Friend function to allow access to private members
    friend ostream& operator<<(ostream& out, const CustomList& list);

private:
    // Node structure - hidden implementation detail
    struct Node {
        string value;
        Node* next;

        // Constructor for convenient node creation
        Node(const string& val, Node* nxt = nullptr)
            : value(val), next(nxt) {}
    };

    Node* head;  // Points to first node
    Node* tail;  // Points to last node (enables O(1) push_back!)
};

#endif
