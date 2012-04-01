// Dilshad Sallo, 18.3.2012
//  unsigned long long (int) takes at least 8 bytes but minimum value is zero.

#include <iostream>
#include <typeinfo>

int main() {
  unsigned long long ll = 3316757944182080000;

  std::cout << "the datatype of " << ll << " is " << typeid(ll).name() << "." << std::endl;
  std::cout << "unsigned long long (int) takes " << sizeof(ll) << " bytes." << std::endl;

}
