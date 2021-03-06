/**
 * \author Dilshad Sallo
 * \date 2012/7/9
 * \brief Enumeration class provide explicit scope to avoid conflicts.
 */

#include <cassert>

enum class E1 {
  e1,
  e2,
  e3
};

enum class E2 {
  e1,
  e2,
  e3
};

int main() {
  assert(E1::e1 == (E1) 0);
  assert(E2::e1 == (E2) 0);
}
