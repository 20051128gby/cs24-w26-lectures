#include <iostream>
#include <string>

using namespace std;

struct Node {
    string value;
    Node* next;
};

class CustomList {
public:
    Node* head; //Issue 1: head should be private to encapsulate the data structure.
                 // Sol: Make head private and provide public methods for access if needed.

    CustomList() : head(nullptr) {}
     // Issue 2: Missing destructor to free allocated memory.

    void push_back(string val) { // Issue 3: Inefficiency here: each push_back traverses the entire list O(n).
                                 // Sol: Add a tail pointer
        Node* newNode = new Node{val, nullptr};
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newNode;
        }
    }

    // Issue 4: No print function or other useful methods to interact with the list.
    void print() {
        Node* temp = head;
        while (temp) {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }
};

void createPlaylist() {
    CustomList playlist;

    // TODO: Add three songs to the playlist
    playlist.push_back("Song 1");
    playlist.push_back("Song 2");
    playlist.push_back("Song 3");


    // TODO: Print all songs by traversing from head
    playlist.print();


}

int main() {
    createPlaylist();
    return 0;
}
