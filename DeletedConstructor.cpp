// Dilshad Sallo, 01.04.2012
// Defining explicit deleted constructor and copy constructor.

#include<iostream>

class C {
public:
  C() = delete; // Explicit deleted constructor.
  C(const C& c) = delete; // Explicit deleted copy constructor.
};

int main() {
  // C c1;      error no default constructor.
  // C c2(c1);  error no default copy constructor.
