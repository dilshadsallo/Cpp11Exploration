/**
 * \author Dilshad Sallo
 * \date 2012/7/26
 * \brief Lambda expression that have implicit return type.
 */

#include <iostream>
#include <typeinfo>

int main() {
  auto result = [] (int x, double y) {
    return x * y;
  }(3,4.3);

  std::cout << "The datatype of " << result << " is " << typeid(result).name() << "." << std::endl;
}
