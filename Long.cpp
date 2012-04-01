// Dilshad Sallo, 18.3.2012
//  Long long (int) takes at least 8 bytes.

#include <iostream>
#include <typeinfo>

int main() {
  const long long ll = 1284800371338750000;
  
  std::cout << "the datatype of " << ll << " is " << typeid(ll).name() << "." << std::endl;
  std::cout << "Long Long (int) takes " << sizeof(ll) << " bytes." << std::endl;

}
