// Dilshad Sallo,30.06.2012
// Using static_assert with type traits (float type).

#include <iostream>
#include <type_traits>

template<class T1>
void check(const T1& t1) {
  static_assert(std::is_floating_point<T1>::value, " T1 is not float point");
}

int main() {
  check(12.0);
  //check(12);
}
