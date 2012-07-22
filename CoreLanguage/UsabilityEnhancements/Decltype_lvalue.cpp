//  Dilshad Sallo, 22.7.2012
// Using "decltype" keyword to create a reference type.

#include <iostream>
#include <typeinfo>
#include <cassert>

int main() {
  int i = 1;
  decltype((i)) r = i; // r is int &
  std::cout << "The datatype of  " << r << " is " << typeid(r).name() << "." << std::endl;

  r = 2;
  assert( i == 2);
}
