/**
 * \author Dilshad Sallo
 * \date 2012/6/17
 * \brief Using char32_t to store character literal in 32-bits (UTF-32).
 */

#include <cassert>

int main() {
  const char32_t c1 = U'\U00000061'; //universal character name in 32-bit form
  const char32_t c2 = U'a';

  assert(c1 == c2);
  assert(sizeof(c1) == 4);
  assert(sizeof(c2) == 4);
}
