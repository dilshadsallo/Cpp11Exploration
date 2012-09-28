/**
 * \author Dilshad Sallo
 * \date 2012/7/9
 * \brief Enumeration class prevent conversion to or from integer.
 */

#include <cassert>

enum class E {
  e1,
  e2,
  e3
};

int main() {
  E e = E::e1;
  assert(e == (E) 0);

  //assert(e == 0); // no E to int conversion.
  //int i = E::e1;  // no E to int conversion.
}
