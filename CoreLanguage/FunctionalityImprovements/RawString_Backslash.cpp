// Dilshad Sallo, 19.6.2012
// Using raw string literal to represent backslashes and text easily.

#include <cassert>
#include <string.h>

int main() {
  const char *s = R"('\\'|[:word:^.*()\\")";
  assert(strcmp (s, "\'\\\\\'|[:word:^.*()\\\\\"") == 0);
}
