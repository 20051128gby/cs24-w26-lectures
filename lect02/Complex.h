#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;

/**
 * Complex - A simple complex number class for operator overloading demo
 *
 * This class demonstrates:
 * - Operator overloading (<<, +, ==)
 * - Friend functions
 * - Why we return references vs. values
 */
class Complex {
public:
    // Constructor with default parameters
    Complex(double r = 0.0, double i = 0.0);

    // Accessors
    double getReal() const;
    double getImag() const;

    // TODO: Implement operator<< (instructor will demo this live!)
    // This allows: cout << complex_obj;
    friend ostream& operator<<(ostream& out, const Complex& c);

    // TODO: Implement operator+ (students will do this in Activity 1B!)
    // This allows: Complex c3 = c1 + c2;
    friend Complex operator+(const Complex& lhs, const Complex& rhs);

    // Optional: operator== for comparison
    // This allows: if (c1 == c2) { ... }
    friend bool operator==(const Complex& lhs, const Complex& rhs);

private:
    double real;
    double imag;
};

#endif
