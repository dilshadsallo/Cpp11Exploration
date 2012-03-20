// Dilshad Sallo, 18.3.2012
//Using predefined variable __func__, which makes a function name available for use within the function.

#include <iostream>

void myFunction() {
  std::cout << "Entering function " << __func__ << std::endl;
  std::cout << "Size of __func__ = " << sizeof(__func__) << std::endl;
}

int main () {
  myFunction();

}