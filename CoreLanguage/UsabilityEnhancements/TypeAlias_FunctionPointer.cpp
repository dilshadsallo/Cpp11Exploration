/**
 * \author Dilshad Sallo
 * \date 2012/8/6
 * \brief Using template alias "using" keyword with  a function pointer.
 */

#include <cassert>

double multiply(int i, double d) {
  return i * d;
}

int main() {
  // using template alias
  using pointer = double(*) (int, double);
  pointer fp = multiply;
  assert(fp(5,4.6) == 23);

  //using typedef keyword
  typedef double (*pointer1) (int, double);
  pointer1 fp1 = multiply;
  assert(fp1(2,4.5) == 9);
}
