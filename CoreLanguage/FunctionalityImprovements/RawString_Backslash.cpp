/**
 * \author Dilshad Sallo
 * \date 2012/6/19
 * \brief Using raw string literal to represent backslashes and text easily.
 */

#include <cassert>
#include <string.h>

int main() {
  const char *s = R"('\\'|[:word:^.*()\\")";
  assert(strcmp (s, "\'\\\\\'|[:word:^.*()\\\\\"") == 0);
}
