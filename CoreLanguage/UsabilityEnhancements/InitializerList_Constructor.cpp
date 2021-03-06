/**
 * \author Dilshad Sallo
 * \date 2012/7/4
 * \class C
 * \brief Using "initializer-list" explicitly within constructor.
 *
 * This class has user-defined constructor that takes template
 * class "initializer_list" to initializer data members (array) of class C.
 */

#include <cassert>
#include <initializer_list>

class C {
private:
  int a[4];
public:
  C(const std::initializer_list<int> il);
  void check();
};

C::C(const std::initializer_list<int> il) {
  int i = 0;
  for (auto p = il.begin(); p != il.end(); p++ ) {
    a[i++] = *p;
  }
}

void C::check() {
  assert(a[0] == 1);
  assert(a[1] == 2);
  assert(a[2] == 3);
  assert(a[3] == 4);
}

int main() {
  C c {1,2,3,4};
  c.check();
}
