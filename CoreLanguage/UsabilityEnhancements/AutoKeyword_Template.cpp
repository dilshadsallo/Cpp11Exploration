// Dilshad Sallo, 22.8.2012
// Using "auto" keyword with templates to deduce the type.

#include <iostream>
#include <typeinfo>

template<class T1, class T2> void multiply(const T1& i, const T2& j) {
  auto result = i * j;
  std::cout << "the datatype of " << result << " is " << typeid(result).name() << " ." << std::endl;
}

int main() {
  multiply(123.45,4);
  multiply(555555,99999LL);
  multiply('a', 1);
}
