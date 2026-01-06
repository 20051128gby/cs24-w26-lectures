#include "CustomList.h"
#include <iostream>

using namespace std;

/**
 * Lecture 1 Demo - CustomList (Improved Version)
 *
 * This demonstrates the improved CustomList with:
 * - Proper encapsulation (private head/tail)
 * - Efficient O(1) push_back (using tail pointer)
 * - Constructor with initializer list
 * - Operator overloading
 */

void demonstrateBasics() {
    cout << "=== Demo 1: Basic Usage ===" << endl;

    // Create empty list using our constructor
    CustomList playlist;

    // Add songs using push_back
    playlist.push_back("Bad");
    playlist.push_back("Beat It");
    playlist.push_back("Thriller");

    // Print using print() method
    cout << "Using print() method: ";
    playlist.print();

    CustomList playlist2 = {"Bad", "Beat It", "Thriller"}; // Using initializer list constructor
    cout << "Using initializer list constructor: " << playlist2;

    cout << endl;
}

void demonstrateOperatorOverloading() {
    cout << "=== Demo 2: Operator Overloading ===" << endl;

    CustomList playlist;
    playlist.push_back("Billie Jean");
    playlist.push_back("Smooth Criminal");

    // Natural syntax using operator<<
    cout << "Using operator<<: " << playlist << endl;

    // Chaining works!
    cout << "Chaining: " << playlist << " has " << "2 songs" << endl;

 //   CustomList playlist2 = {"Black or White", "Remember the Time", "Heal the World"};  
 //   cout << "Initializer list creation: " << playlist2 << endl;

    cout << endl;
}

void demonstrateMultipleLists() {
    cout << "=== Demo 3: Multiple Independent Lists ===" << endl;

    CustomList playlist1;
    playlist1.push_back("Thriller");
    playlist1.push_back("Bad");

    CustomList playlist2;
    playlist2.push_back("Dangerous");
    playlist2.push_back("Black or White");

    cout << "Playlist 1: " << playlist1 << endl;
    cout << "Playlist 2: " << playlist2 << endl;

    // Note: In Lecture 2, we'll see what happens when we copy lists!
    // CustomList playlist3 = playlist1;  // Coming in Lecture 2!

    cout << endl;
}

int main() {
    cout << "========================================" << endl;
    cout << "  CS24 Lecture 1: CustomList Demo" << endl;
    cout << "========================================" << endl;
    cout << endl;

    demonstrateBasics();
    demonstrateOperatorOverloading();
    demonstrateMultipleLists();

    cout << "========================================" << endl;
    cout << "  End of Demo" << endl;
    cout << "========================================" << endl;

    return 0;
}
