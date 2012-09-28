/**
 * \author Dilshad Sallo
 * \date 2012/7/22
 * \brief Using "decltype" keyword to create data type as the same as variable type.
 */

#include <iostream>
#include <typeinfo>

int main() {
  const int i = 7;
  double j = 7.5;
  const long long ll = 1284800371338750000LL;
  const unsigned long long ull = 1284800371338750000ULL;
  const double* p;

  decltype(i) x {};
  decltype(j) y {};
  decltype(ll) z {};
  decltype(ull) k {};
  decltype(p) pp {};
  decltype(&j) r{};

  std::cout << "The datatype of  " << x << " is " << typeid(x).name() << "." << std::endl;
  std::cout << "The datatype of  " << y << " is " << typeid(y).name() << "." << std::endl;
  std::cout << "The datatype of  " << z << " is " << typeid(z).name() << "." << std::endl;
  std::cout << "The datatype of  " << k << " is " << typeid(k).name() << "." << std::endl;
  std::cout << "The datatype of  " << pp << " is " << typeid(pp).name() << "." << std::endl;
  std::cout << "The datatype of  " << r << " is " << typeid(r).name() << "." << std::endl;
}
