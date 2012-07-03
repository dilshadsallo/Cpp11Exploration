// Dilshad Sallo, 3.7.2012
// Using uniform initialization (brace-init) to initialize the class memebers. 

#include <iostream>
#include <cassert>

class C {
private:
  int i {1};
  char c {'a'};
  double d {2.3};
  std::string s{"abc"};
  int *p {};
public:
  void check ();
};

void C::check() {  
  assert( i == 1);
  assert( c == 'a');
  assert( d == 2.3);
  assert (s == "abc");
  assert( p == nullptr);
}

int main() {
  C c1;
  c1.check();
}
