/**
 * \author Dilshad Sallo
 * \date 2012/8/26
 * \class C
 * \brief Using perfect forwarding.
 *
 * Using rvalue reference to execute perfect forwarding,
 * which pass arguments to another function with keeping a nature of type.
 */

#include <iostream>

struct C {
  C(int &&c) { std::cout << "Rvalue overloaded" << std::endl;}
  C(int &c) {std::cout << "Lvalue overloaded" << std::endl;}
};

template <class T>
void f(T&& t) {
  C(std::forward<T>(t));
}

int main() {
  f<C>(2); // rvalue
  int i = 9;
  f<C>(i); // lvalue
  f<C>(i+2); // rvalue
}
