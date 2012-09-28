/**
 * \author Dilshad Sallo
 * \date 2012/8/11
 *
 * Using variadic template to define function called "user_make_tuple"
 * that work exactly as the same as std::make_tuple, which is supported by std::tuple.
 */

#include <cassert>
#include <tuple>
#include <string.h>
#include <vector>
#include <iostream>
#include <typeinfo>

// variadic function
template <typename... Args>
std::tuple<Args...> user_make_tuple(Args&&...args) {
  return std::tuple<Args...>(args...);
}

int main() {
  int i = 1;
  double d = 2;
  char c = 'a';
  auto tuple1 = user_make_tuple(i,d,c); // make user tuple
  auto tuple2 = std::make_tuple(i,d,c);// use make_tuple that is provided by std::tuple

  assert(std::get<0>(tuple1) == std::get<0>(tuple2));
  assert(std::get<1>(tuple1) == std::get<1>(tuple2));
  assert(std::get<2>(tuple1) == std::get<2>(tuple2));

  // defining tuple that takes a variable number of type arguments.
  auto tuple3 = user_make_tuple(5,'b',"hello",true,123456789LL);
  assert(std::get<0>(tuple3) == 5);
  assert(std::get<1>(tuple3) == 'b');
  assert(strcmp(std::get<2>(tuple3),"hello") == 0);
  assert(std::get<3>(tuple3) == true);
  assert(std::get<4>(tuple3) == 123456789LL);

  std::cout << std::get<0>(tuple3) << " : " << typeid(std::get<0>(tuple3)).name() << "." << std::endl;
  std::cout << std::get<1>(tuple3) << " : " << typeid(std::get<1>(tuple3)).name() << "." << std::endl;
  std::cout << std::get<2>(tuple3) << " : " << typeid(std::get<2>(tuple3)).name() << "." << std::endl;
  std::cout << std::get<3>(tuple3) << " : " << typeid(std::get<3>(tuple3)).name() << "." << std::endl;
  std::cout << std::get<4>(tuple3) << " : " << typeid(std::get<4>(tuple3)).name() << "." << std::endl;
}
