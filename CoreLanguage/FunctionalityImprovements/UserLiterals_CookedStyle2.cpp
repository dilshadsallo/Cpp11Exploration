// Dilshad Sallo, 28.6.2012
// Using user defined cooked literals to convert string from C-style to C++ style.

#include <string>
#include <string.h>
#include <cassert>

std::string operator "" _c(const char* ch, std::size_t len) {
  assert (strcmp (ch, "bcd") ==0 );
  return 'a' + std::string(ch,len);
}

int main() {
  auto s = "bcd"_c;
  assert(s == "abcd");
}
