#include "CustomList.h"

// Constructor - Uses initializer list to create list
// Initializes head and tail to nullptr for empty list
CustomList::CustomList() : head(nullptr), tail(nullptr) {
    // Body is empty - all initialization done in initializer list!
    // This is the preferred C++ style
}


// Add element to end of list - O(1) complexity!
void CustomList::push_back(const string& val) {
    // Create new node using Node constructor
    Node* newNode = new Node(val, nullptr);

    // Case 1: Empty list
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    }
    // Case 2: Non-empty list
    else {
        tail->next = newNode;  // Link current tail to new node
        tail = newNode;        // Update tail to new node
    }
}

// Print all elements in the list
// TODO: Students will implement this in Activity 1B
void CustomList::print() const {
    // YOUR CODE HERE:
    // 1. Start at head
    // 2. Traverse the list using a loop
    // 3. Print each node's value
    // 4. Don't forget to print a newline at the end!

}

// Overload << operator for natural printing: cout << list;
// TODO: Students will implement this in Activity 1C
// This is a FREE FUNCTION (not a member), but marked as friend
ostream& operator<<(ostream& out, const CustomList& list) {
    // YOUR CODE HERE:

    return out;  // Don't forget to return!
}
