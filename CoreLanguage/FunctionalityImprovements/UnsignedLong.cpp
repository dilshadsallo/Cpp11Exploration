// Dilshad Sallo, 18.3.2012
//  unsigned long long (int) takes at least 8 bytes but minimum value is zero.

#include <iostream>
#include <typeinfo>
#include <cassert>

int main() {
  unsigned long long ull = 3316757944182080000ULL;

  std::cout << "the datatype of " << ull << " is " << typeid(ull).name() << "." << std::endl;
  assert(sizeof(ull) >= 8);

}
