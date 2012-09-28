/**
 * \author Dilshad Sallo
 * \date 2012/8/16
 * \class C
 * \brief defining class C as standard layout.
 * Defining standard layout classes C and A,
 * but are not trivial classes and leading to be not POD type.
 */

#include <type_traits>

class C {
public:
  C(int i, int j) : i(i), j(j) {}
  C(const C& c) {}
  C(C&& c) {}
  C& operator=(const C& c) { return *this;}
  C& operator=(C&& c) {return *this;}
  ~C() {}
private:
  int i, j;
};

class A : C {
  // C c; // it is not allowed in standard layout class.
  // int k; // it is not allowed in standard layout class.
};

int main() {
  static_assert( std::is_standard_layout<C>::value, "class C is not standard layout.");
  static_assert( std::is_standard_layout<A>::value, "class A is not standard layout.");
  // static_assert(std::is_trivial<C>::value, "class C is not trivial." );
  // static_assert(std::is_trivial<A>::value, "class A is not trivial." );
  // static_assert( std::is_pod<C>::value, "class C is not pod type.");
  // static_assert( std::is_pod<A>::value, "class A is not pod type.");
}
