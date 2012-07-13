// Dilshad Sallo, 01.04.2012
// Defining explicit default constructor.

#include <cassert>

class C {
private:
  int i;
public:
  C() = default; // Explicit default constructor
  C(const int i) : i(i) {}
  int val() const { return i; }
};

int main() {
  C c1;
  assert(c1.val() == 0);
  C c2(5);
}
