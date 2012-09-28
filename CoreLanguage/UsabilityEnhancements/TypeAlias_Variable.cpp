/**
 * \author Dilshad Sallo
 * \date 2012/8/6
 * \brief Using template alias "using" keyword with variables.
 */

#include <iostream>
#include <typeinfo>

int main() {
  using myinteger = int;
  using mydouble = double;
  using mycharacter = char;

  myinteger  x = 5;
  mydouble y = 5.5;
  mycharacter z = 'a';

  std::cout << "the datatype of " << x << " is " << typeid(x).name() << std::endl;
  std::cout << "the datatype of " << y << " is " << typeid(y).name() << std::endl;
  std::cout << "the datatype of " << z << " is " <<typeid(z).name() << std::endl;
}
