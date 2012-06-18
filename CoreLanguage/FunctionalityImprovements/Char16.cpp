// Dilshad Sallo, 17.6.2012
// Using char16_t to store character literal with 16 bits (UTF-16). 

#include <iostream>
#include <cassert>

int main() {
  const char16_t c1 = u'\u0061';
  const char16_t c2 = u'a';

  assert(c1 == c2);
  assert(sizeof(c1) == 2);
  assert(sizeof(c2) == 2);

}
