/**
 * \author Dilshad Sallo
 * \date 2012/7/1
 * \brief Using "static_assert" at namespace scope.
 */
namespace {
  static_assert(sizeof(long) >= 4,  " long must be at least 32-bits.");
}

int main() {}
