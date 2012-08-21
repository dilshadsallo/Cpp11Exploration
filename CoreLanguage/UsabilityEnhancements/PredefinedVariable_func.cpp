// Dilshad Sallo, 18.3.2012
// Using macro __func__, which makes the function name available for use
// within the function.

#include <iostream>

namespace {
  void f() {
    std::cout << "Entering function \"" << __func__ << "\"\n";
    std::cout << "Size of __func__ = " << sizeof(__func__) << "\n";
  }
}

int main() { f(); }
