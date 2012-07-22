// Dilshad Sallo, 22.7.2012
// Using "decltype" keyword with template class to deduce the type.

#include <iostream>
#include <typeinfo>

template<class T1, class T2> void add(const T1& i, const T2& j) {
  decltype(i+j) result = i + j;
  std::cout << "the datatype of " << result << " is " << typeid(result).name() << " ." << std::endl;
}

int main() {
  add(123.3,4);
  add(222222,99999LL);
  add('c', 1);
  add("Hello World",6);
}
