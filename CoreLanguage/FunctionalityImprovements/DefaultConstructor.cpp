// Dilshad Sallo, 01.04.2012
// Defining explicit default constructor and copy constructor.

#include<iostream>

class C {
  int i;
public:
  C() = default; // Explicit default constructor
  C(int j);

  C(const C& c) = default; // Explicit Default copy constructor
};

C::C(int j) {
 i = j;
}

int main() {
  C c1;
  C c2(c1);
}
