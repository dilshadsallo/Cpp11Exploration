// Dilshad Sallo, 18.3.2012
// decltype(exp) will define variable j as the same as exp type.

#include <iostream>
#include <typeinfo>

int main() {
  const int i = 7;
  const decltype(i) j = 8;
  
  std::cout << "The datatype of  " << j << " is " << typeid(j).name() << "." << std::endl;

}
