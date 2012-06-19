// Dilshad Sallo, 19.6.2012
// Using raw string literal to deal easily with backslash,
// quotation marks, comma and text. 

#include <iostream>
#include <cassert>
#include <string.h>

int main() {
  const char *s = R"('\\'|[:word:^.*()\\")";
  assert (strcmp (s, "\'\\\\\'|[:word:^.*()\\\\\"") == 0);  
}
