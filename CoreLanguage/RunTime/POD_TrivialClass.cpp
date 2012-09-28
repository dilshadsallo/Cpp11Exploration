/**
 * \author Dilshad Sallo
 * \date 2012/8/16
 * \class C
 * \brief defining class C as trivial.
 *
 * Defining trivial class C but is not standard-layout class and leading to be not POD type.
 */

#include <type_traits>

class C {
public:
  C() = default;
  C(int i, int j) : i(0), j(0) {}
  C(const C&) = default;
  C(C&& ) = default;
  C& operator=(const C& ) = default;
  C& operator=(C&& ) = default;
  ~C() = default;
protected:
  int i;
private:
  int j;
};

int main() {
  static_assert(std::is_trivial<C>::value, "class C is not trivial.");
  //static_assert(std::is_standard_layout<C>::value, "class C is not standard layout.");
  //static_assert(std::is_pod<C>::value, "class C is not POD type." );
}
