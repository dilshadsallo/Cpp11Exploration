/**
 * \author Dilshad Sallo
 * \date 2012/4/2
 * \class Derived1, Derived2
 * \brief Using "override" keyword to mark functions explicitly as override.
 */

#include <cassert>

class Base {
public:
  Base() : x(1) {}
  virtual int f(int i) { return i+x;}
private:
  const int x;
};

class Derived1 : Base {
public:
  Derived1() : y(2) {}
  int f(int i) override { return i + y;} // explicit override
private:
  const int y;
};

class Derived2 : Base {
public:
  Derived2() : z(3) {}
  int f(int i) override { return i+z; } // explicit override
private:
  const int z;
};

int main() {
  Base b;
  Derived1 d1;
  Derived2 d2;

  const int bvalue = b.f(2);
  const int dvalue1 = d1.f(2);
  const int dvalue2 = d2.f(2);

  assert( bvalue == 3);
  assert( dvalue1 == 4);
  assert( dvalue2 == 5);
}
