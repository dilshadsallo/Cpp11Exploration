/**
 * \author Dilshad Sallo
 * \date 2012/7/5
 * \class C
 * \brief Using range-based for statement to iterate over the elements of initializer_list.
 */

#include <iostream>
#include <initializer_list>

namespace {
  void f(std::initializer_list<int> il) {
    for(const int i : il)
    std::cout << i << " ";
  }
}

int main() {
  f({1,2,3,4,5,6,7});
}
