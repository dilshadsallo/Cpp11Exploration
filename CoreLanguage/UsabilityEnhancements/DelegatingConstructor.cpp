// Dilshad Sallo, 8.7.2012
// Using delegating constructor to call target constructor.

#include <iostream>
#include <cassert>

class C {
private:
  int a, b;
public:
  C() : C(1,2) {}                  // delegating constructor 
  C(int i): C(i,4) {}	           // delegating constructor
  C(int i, int j) : a(i), b(j) {} // target constructor
  void check();
};

void C:: check () {  
  static int i = 0;
  assert( a == 1+i);
  assert( b == 2+i);
  i+=2;
  
}

int main() {
  C c1;
  C c2(3);
  
  c1.check();
  c2.check();
}
