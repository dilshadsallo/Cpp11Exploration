// Dilshad Sallo, 24.04.2012
// Using move semantic to avoid duplicate copy.

#include <iostream>
#include <string>

template<class T>
void swapcopy(T& a, T& b) {
  T temp(a);   // two copies of a
  a = b;       // two copies of b
  b = temp;    // two copies of temp
}

template<class T>
void swapmove(T& a, T& b) {
  T temp(std::move(a));  // one copy of a
  a = std::move(b);      // one copy of b
  b = std::move(temp);   // one copy of temp
}

int main() {
  int a = 2;
  int b = 4;
    
  swapcopy(a, b); 
  std::cout << "The value of a is : " << a << "." << std::endl;
  std::cout << "The value of b is : " << b << ".\n" << std::endl;
    
  swapmove(a, b);
  std::cout << "The value of a is : " << a << "." << std::endl;
  std::cout << "The value of b is : " << b << "." << std::endl;
    
}
