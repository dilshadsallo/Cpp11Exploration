// Dilshad Sallo, 20.7.2012
// Using "auto" keyword to deduce the types of variables from their initializer expressions.

#include <iostream>
#include <typeinfo>

int main() {
  const auto i = 1;
  const auto j = 2.3;
  const auto c = 'a';
  const auto s = "Hello";
  const auto ll = 1284800371338750000LL;
  const auto ull = 1284800371338750000ULL;

  std::cout << "The datatype of " << i << " is " << typeid(i).name() << "." << std::endl;
  std::cout << "The datatype of " << j << " is " << typeid(j).name() << "." << std::endl;
  std::cout << "The datatype of " << c << " is " << typeid(c).name() << "." << std::endl;
  std::cout << "The datatype of " << s << " is " << typeid(s).name() << "." << std::endl;
  std::cout << "The datatype of " << ll << " is " << typeid(ll).name() << "." << std::endl;
  std::cout << "The datatype of " << ull << " is " << typeid(ull).name() << "." << std::endl;
}
