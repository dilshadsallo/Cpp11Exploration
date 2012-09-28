/**
 * \author Dilshad Sallo
 * \date 2012/6/17
 * \brief Using char16_t to store character literal in 16-bits (UTF-16).
 */

#include <cassert>

int main() {
  const char16_t c1 = u'\u0061';//universal character name in 16-bit form
  const char16_t c2 = u'a';

  assert(c1 == c2);
  assert(sizeof(c1) == 2);
  assert(sizeof(c2) == 2);
}
