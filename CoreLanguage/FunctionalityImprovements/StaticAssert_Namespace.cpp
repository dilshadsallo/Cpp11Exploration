// Dilshad Sallo, 1.7.2012
// Using "static_assert" at namespace scope.

namespace {
  static_assert(sizeof(long) >= 4,  " long must be at least 32-bits.");
}

int main() {}
