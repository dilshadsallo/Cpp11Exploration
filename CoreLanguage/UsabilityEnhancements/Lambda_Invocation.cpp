/**
 * \author Dilshad Sallo
 * \date 2012/7/26
 * \brief Using lambda expression without parameters and return type to print string.
 */

#include <iostream>

int main() {
  []{std::cout<<"Hello World!." <<std::endl;}();
}
