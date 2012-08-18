// Dilshad Sallo, 19.6.2012
// Using raw string literal to represent escape sequence and 
// quotation marks as normal text.

#include <iostream>
#include <string.h>
#include <cassert>

int main() {
  const char *s = R"(ab""c
de""f)";
  assert (strcmp (s, "ab\"\"c\nde\"\"f") == 0);

  const char *s1 = R"(\t, \r, \a  and \n are not processed a escape sequences.)";
  std::cout << s1 << std::endl;

}
