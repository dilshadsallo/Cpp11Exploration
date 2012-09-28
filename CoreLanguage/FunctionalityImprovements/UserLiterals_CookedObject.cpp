/**
 * \author Dilshad Sallo
 * \date 2012/7/4
 * \class C
 * \brief Using User-defined literals to return object instead of primitive type.
 */

#include <string>
#include <string.h>
#include <cassert>

class C {
public:
  C(const char *s, int len);
  int getlen() const { return length; }
  char* getstr() { return str; }
private:
  char str[20];
  int  length;
};

C::C(const char *s, int len) {
  strcpy(str,s); length = len;
}

C operator"" _i(const char* s, std::size_t len) {
  return C(s,len);
}

int main() {
  C c1 = "abcd"_i;
  assert(strcmp(c1.getstr(),"abcd")==0);
  assert(c1.getlen() == 4);
}
