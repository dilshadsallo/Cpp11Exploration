/**
 * \author Dilshad Sallo
 * \date 2012/6/19
 * 
 * Using raw string literals with Unicode literal Prefixes ("u8", u" and "U")
 * to store the content of raw string in 8,16 and 32 bits.
 */

#include <cassert>

int main() {
  const char st[] = u8R"(\"'() Store in 8-bits)";
  const char16_t st1[] = uR"(\"'() Store in 16-bits)";
  const char32_t st2[] = UR"(\"'() Store in 32-bits)";

  assert(sizeof(st)== 22);
  assert(sizeof (st1) == 46);
  assert(sizeof (st2) == 92);
}
