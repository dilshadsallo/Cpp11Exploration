// Dilshad Sallo, 3.7.2012
// Using uniform initialization (brace-init) to prevent narrowing.

#include <iostream>

void f(int i) {}

int main() {
 
  //int x = {3.14};  // Error because narrowing
  //f({3.14});       // Error because narrowing
  
}
