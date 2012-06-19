// Dilshad Sallo, 19.6.2012
// Storing the contents of raw string in 16 and 32 bits. 

#include <iostream>
#include <cassert>

int main() {
  const char16_t st[] = uR"(\"'() Store in 16-bits)";
  const char32_t st1[] = UR"(\"'() Store in 32-bits)";
  
  assert (sizeof (st) == 46);
  assert (sizeof (st1) == 92);
}
