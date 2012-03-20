// Dilshad Sallo, 18.3.2012
//  Long long (int) takes at least 8 bytes.

#include <iostream>

int main() {
  long long ll = 14;
  std::cout << "the datatype of " << ll << " is long long (int)." << std::endl;
  std::cout << "Long Long (int) takes " << sizeof(ll) << " bytes." << std::endl;

}
