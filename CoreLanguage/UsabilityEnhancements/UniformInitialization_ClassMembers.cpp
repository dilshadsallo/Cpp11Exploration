/**
 * \author Dilshad Sallo
 * \date 2012/7/3
 * \class C
 * \brief Using uniform initialization (brace-initialization) to initialize the class members.
 */

#include <cassert>
#include <string>

class C {
public:
  void check();
private:
  int i {1};
  int j {}; //default initialization
  char c {'a'};
  double d {2.3};
  std::string s{"abc"};
  int *p {};//default initialization
};

void C::check() {
  assert( i == 1);
  assert(j == 0);
  assert( c == 'a');
  assert( d == 2.3);
  assert (s == "abc");
  assert( p == nullptr);
}

int main() {
  C c1;
  c1.check();
}
