// Dilshad Sallo, 01.04.2012
// Defining explicit default constructor.

#include<iostream>
 
class C {
private:
  int i;
public:
  C() = default; // Explicit default constructor
  C(int j);

};

C::C(int j) : i(j) {
  
}

int main() {
  C c1;
  C c2(5);
}

