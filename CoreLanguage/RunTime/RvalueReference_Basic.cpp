// Dilshad Sallo, 1.8.2012
// Using rvalue-reference to bind to rvalues.

#include <cassert>

int f() {return 5;}

int main() {
  int&& a = 5; // reference to constant
  int&& b = f(); // reference to temporary object
  assert(b == 5);

  int&& c = a + b; // reference to temporary object
  assert(c == 10);

  //int&& i = a; //reference to Ivlaue is not allowed
}
