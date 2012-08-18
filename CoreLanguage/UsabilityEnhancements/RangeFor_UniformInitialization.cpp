// Dilshad Sallo, 5.7.2012
// Using range-based for statement with uniform initialization.

#include <iostream>

int main() {

  for(const int i : {2,4,6,8,10,12,14,16,18,20}) {
    std::cout << i << " ";
  }
}
