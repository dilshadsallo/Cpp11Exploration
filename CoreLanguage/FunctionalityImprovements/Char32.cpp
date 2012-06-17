// Dilshad Sallo, 17.6.2012
// Using char32_t to store character literal with 32 bits (UTF-32). 

#include <iostream>
#include <cassert>

int main() {
  const char32_t c1 = U'\U00000061';
  const char32_t c2 = U'a';

  assert(sizeof(c1) == 4);
  assert(sizeof(c2) == 4);

}
