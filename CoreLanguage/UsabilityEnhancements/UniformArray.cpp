// Dilshad Sallo, 3.7.2012
// Using uniform initialization to  Initialize array member variables.

#include <iostream>
#include <cassert>

class C {
private:
  int array[4];
public:
  C(); 
  void check();
};

C::C() : array {1,3,5,7} {}

void C::check() {
  assert(array[0] == 1);
  assert(array[1] == 3);
  assert(array[2] == 5);
  assert(array[3] == 7);
}

int main() {
  C c;
  c.check();
}
