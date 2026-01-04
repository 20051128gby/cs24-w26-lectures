#include <iostream>
#include <string>

using namespace std;

struct Node {
    string value;
    Node* next;
};

class CustomList {
public:
    Node* head;

    CustomList() : head(nullptr) {}

    void push_back(string val) {
        Node* newNode = new Node{val, nullptr};
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newNode;
        }
    }
};

void createPlaylist() {
    CustomList playlist;

    // TODO: Add three songs to the playlist


    // TODO: Print all songs by traversing from head

}

int main() {
    createPlaylist();
    return 0;
}
