// Dilshad Sallo, 18.3.2012
//  unsigned long long (int) takes at least 8 bytes but minimum value is zero.

#include <iostream>

int main() {
  unsigned long long ll = 140;

  std::cout << "the datatype of " << ll << " is unsigned long long (int)." << std::endl;
  std::cout << "unsigned long long (int) takes " << sizeof(ll) << " bytes." << std::endl;

}
