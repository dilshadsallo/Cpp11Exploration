/**
 * \author Dilshad Sallo
 * \date 2012/6/27
 * \class A
 * \brief Using "default" within special member functions.
 *
 * Using "default" keyword in class A to change accessibility
 * of special member functions.
 */

#include <cassert>

class A {
public:
  A(const A& s) = default; // not needed
  A& operator=(const A& s) = default; // not needed
  ~A() = default; // not needed
protected:
  A() = default;
};

class B : A {};

int main() {
  // A a; // not possible
  B b;
  assert(sizeof(b) == 1); // not needed
}
