// Dilshad Sallo, 23.6.2012
// Using char32_t  to concatenate string literals and store them in 32 bits.

#include <cassert>

int main() {
  const char32_t *st1 = U"a" "b" "c";
  const char32_t *st2 = "a" U"b" "c";
  const char32_t *st3 = "a" "b" U"c";
  const char32_t *st4 = U"a" U"b" U"c";

  const char32_t *st5 = U"abc";
  const char32_t s32[] = U"abcd";

  assert (st1 == st5 && st2 == st5);
  assert (st3 == st5 && st4 == st5);
  assert (sizeof (s32) == 20);
}
