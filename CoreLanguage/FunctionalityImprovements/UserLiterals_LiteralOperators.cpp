/**
 * \author Dilshad Sallo
 * \date 2012/7/1
 * \brief Calling user-defined literals depending on literal operator.
 */

#include <iostream>

namespace {

  void operator"" _i(long double) {
    std::cout << "long double was called" << std::endl;
  }

  void operator"" _i(unsigned long long) {
    std::cout << "unsigned long long was called " << std::endl;
  }

  void operator"" _i(const wchar_t* , std::size_t len) {
    std::cout << "const wchar* was called" << std::endl;
  }

  void operator"" _i(const char* , std::size_t len) {
    std::cout << "const char* string was called" << std::endl;
  }

  void operator"" _i(const char16_t* , std::size_t len) {
    std::cout << "const char16_t* was called" << std::endl;
  }

  void operator"" _i(const char32_t* , std::size_t len) {
    std::cout << "const char32_t* was called" << std::endl;
  }
}

int main() {
  1.2_i;
  1_i;
  "abcd"_i;
  L"abcd"_i;
  u"abcd"_i;
  U"aab"_i;
}
