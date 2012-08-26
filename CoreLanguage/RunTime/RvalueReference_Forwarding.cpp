// Dilshad Sallo, 26.8.2012
// Using rvalue reference to execute perfect forwarding,
// which pass arguments to another function.

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
