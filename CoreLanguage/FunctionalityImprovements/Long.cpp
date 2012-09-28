/**
 * \author Dilshad Sallo
 * \date 2012/3/18
 * \brief Long long (int) takes at least 8 bytes.
 */

#include <iostream>
#include <typeinfo>
#include <cassert>

int main() {
  const long long ll = 1284800371338750000LL;

  std::cout << "the datatype of " << ll << " is " << typeid(ll).name() << "." << std::endl;
  assert(sizeof(ll) >= 8);

}
