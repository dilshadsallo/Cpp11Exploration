// Dilshad Sallo,
// Using prefix "u8" to store the contents of strings in 8-bit form(UTF-8).

#include <cassert>
#include <string.h>

int main() {
  const char s1[] = u8"Hello";
  const char s2[] = u8"\u0048\u0065\u006C\u006C\u006F"; //universal character name in 8-bit form
  assert(strcmp(s1,s2) == 0);
  assert(sizeof(s1) == 6);
  assert(sizeof(s2) == 6);

  const char *s3 = u8"a" "b" "c";
  const char *s4 = "a" u8"b" "c";
  const char *s5 = "a" "b" u8"c";
  const char *s6 = u8"a" u8"b" u8"c";
  assert (s3 == s6 && s4 == s6);
  assert (s5 == s6);
}
