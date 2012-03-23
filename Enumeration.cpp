// Dilshad Sallo, 18.3.2012
// Enumeration class allow to define clear underlying type and explicit scope.

#include <cassert>

enum class Enum : unsigned long {
  e1,
  e2 = 10,
  e3
};

int main() {

 assert(Enum::e1 == (Enum) 0);
 assert(Enum::e2 == (Enum) 10);
 assert(Enum::e3 == (Enum) 11);
}
