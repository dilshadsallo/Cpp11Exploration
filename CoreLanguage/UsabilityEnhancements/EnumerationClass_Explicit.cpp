/**
 * \author Dilshad Sallo
 * \date 2012/3/18
 * \brief Enumeration class allow to define explicitly underlying type.
 */

#include <cassert>

enum  Enum : unsigned long long{
  e1,
  e2 = 10,
  e3
};

int main() {

  assert(Enum::e1 == (Enum) 0);
  assert(Enum::e2 == (Enum) 10);
  assert(Enum::e3 == (Enum) 11);
  assert(sizeof(Enum::e1) == 8);
}
