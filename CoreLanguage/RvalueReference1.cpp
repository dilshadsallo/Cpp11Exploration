// Dilshad Sallo, 24.04.2012
// Using Rvalue reference to solve some problems in C++.

#include <iostream>

void f(int& value) {
  --value;
  std::cout << "Decrement with Ivalue reference. " << std::endl;
}

void f(int&& value) {
  --value;
  std::cout << "Decrement with rvalue reference. " << std::endl;
}

int main() {
  int&& a = 10;   // Legal, a is an rvalue reference: reference to a constant.
  int i = 2;
  int j = 3;
  int&& b = i + j; // Legal, (i+j) is an rvalue reference: reference to a temporary.
  
  f(i);   // Decrement value using Ivalue reference.
  f(a+b); // Decrement expression using rvalue reference.
  f(3);   // Decrement value using rvalue reference.
}
