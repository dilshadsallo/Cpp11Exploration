/**
 * \author Dilshad Sallo
 * \date 2012/7/20
 * \brief Using "auto" keyword to deduce a function return type, which is pointer to pointer.
 */

#include <iostream>
#include <typeinfo>
#include <cassert>

template<class T> T* pointer(T t) {
  auto **p = & t;
  return p;
}

int main() {
  auto i = 0;
  auto p1 = pointer(&i);
  **p1 = 5;
  std::cout << "The variable P1 is " << typeid(p1).name() << "." << std::endl;
  assert( i == 5);

  auto c = 'a';
  auto p2 = pointer(&c);
  **p2 = 'z';
  std::cout << "The variable P2 is " << typeid(p2).name() << "." << std::endl;
  assert( c == 'z');
}
