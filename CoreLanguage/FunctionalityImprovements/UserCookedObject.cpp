// Dilshad Sallo, 
// Using User-defined literals to return object instead of primitive type. 

#include <iostream>
#include <string>
#include <string.h>
#include <cassert>

class C {
private:
  char str[20];
  int  length;    
public:
  C(const char *s, int len);
  int getlen();
  char* getstr();
};  
 
C::C(const char *s, int len) {
  
  strcpy(str,s); length = len; 
}

int C::getlen() {
  return length;
}

char* C::getstr() {
  return str;
}

C operator"" _i(const char* s, std::size_t len) { 

  return C(s,len);
}

int main() {
    
  C c1 = "abcd"_i;
  assert(strcmp(c1.getstr(),"abcd")==0);
  assert(c1.getlen() == 4);
   
}
   