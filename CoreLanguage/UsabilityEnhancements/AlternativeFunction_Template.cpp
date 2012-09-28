/**
 * \author Dilshad Sallo
 * \date 2012/7/22
 * \brief Using alternative function syntax and decltype keyword within template.
 */

#include <iostream>
#include <typeinfo>

template<class T1, class T2>
auto add(const T1& x, const T2& y) -> decltype(x+y) {

  return x+y;
}

int main() {
  auto d = add(12,2.3);
  auto j = add(3.4, 55LL);
  auto l = add(3, 55LL);
  auto i = add('a',2);
  auto p = add("Hello world",6);

  std::cout << "The datatype of  " << d << " is " << typeid(d).name() << "." << std::endl;
  std::cout << "The datatype of  " << j << " is " << typeid(j).name() << "." << std::endl;
  std::cout << "The datatype of  " << l << " is " << typeid(l).name() << "." << std::endl;
  std::cout << "The datatype of  " << i << " is " << typeid(i).name() << "." << std::endl;
  std::cout << "The datatype of  " << p << " is " << typeid(p).name() << "." << std::endl;
}
