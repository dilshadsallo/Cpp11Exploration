// Dilshad Sallo, 18.3.2012
//  unsigned long long (int) takes at least 8 bytes but minimum value is zero.

#include <iostream>
#include <typeinfo>
#include <cassert>

int main() {
  unsigned long long ll = 3316757944182080000ULL;

  std::cout << "the datatype of " << ll << " is " << typeid(ll).name() << "." << std::endl;
  assert(sizeof(ll) >= 8);

}
