// Dilshad Sallo, 29.6.2012
// Using user defined cooked literals to convert kilometer to mile and versa.

#include <cassert>

int operator"" _m(long double t) {
  long double kilometer = t * 1.609344;
  return kilometer ;
}

int operator"" _k(long double t) {
  long double mile = t * 0.625371;
  return mile;
}

int main() {
  int kilometer = 74.0_m;
  assert (kilometer == 119);

  int mile = 119.0_k;
  assert (mile == 74);
}
