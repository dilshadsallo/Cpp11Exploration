// Dilshad Sallo, 23.6.2012
// Using char16_t  to concatenate string literals and store it with 16 bits. 

#include <cassert>

int main() {
  const char16_t *st1 = u"a" "b" "c";
  const char16_t *st2 = "a" u"b" "c";
  const char16_t *st3 = "a" "b" u"c";
  const char16_t *st4 = u"a" u"b" u"c";

  const char16_t *st5 = u"abc";
  const char16_t s16[] = u"abcd";

  assert (st1 == st5 && st2 == st5);
  assert (st3 == st5 && st4 == st5);
  assert (sizeof (s16) == 10);
 
}
