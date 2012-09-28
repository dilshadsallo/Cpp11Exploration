/**
 * \author Dilshad Sallo
 * \date 2012/8/16
 * \class C
 * \brief Defining class C as POD type.
 *
 *  Defining class "C" which is a standard-layout and trivial class and leading to be POD type.
 */

#include <type_traits>

class C {
public:
  C() = default;
  C(int i, int j) : i(0), j(0) {}
  C(const C&) = default;
  C(C&& ) = default;
  C& operator=(const C& ) = default;
  C& operator= (C&& ) = default;
  ~C() = default;
private:
  int i,j;
};

int main() {
  static_assert(std::is_standard_layout<C>::value, "class C is not standard layout.");
  static_assert(std::is_trivial<C>::value, "class C is not trivial.");
  static_assert(std::is_pod<C>::value, "class C is not POD.");
}
