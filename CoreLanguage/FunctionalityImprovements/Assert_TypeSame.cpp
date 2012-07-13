// Dilshad Sallo,30.06.2012
// Using "static_assert" with type traits(is_same and is_base relations).

#include <type_traits>

class A {};

class A1: A {};

class B {};

class B1 : B {};

template<class T1, class T2>
void same(const T1& t1, const T2& t2) {
  static_assert(std::is_same<T1, T2>::value, " T1 and T2 are not the same.");
}

template<class T1, class T2>
void base(const T1& t1, const T2& t2) {
  static_assert(std::is_base_of<T1, T2>::value, " T1 should be a base for T2.");
}

int main() {
  same(A(), A() );
  base(B(), B1());
}
