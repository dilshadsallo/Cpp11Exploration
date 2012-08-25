// Dilshad Sallo, 25.8.2012
// Applying recursion with constexpr function, and using constexpr function "call_fun"
// to call recursion  constexpr function .

#include <cassert>

constexpr int fact (int n) {
  return n > 0 ? n * fact( n - 1 ) : 1; // recursion function
}

constexpr int call_fun(int i, int j) {
  return i > fact(j)? 1:0; // call another constexpr function
}

int main() {
  assert(fact(5) == 120);

  constexpr int i = call_fun(10,5);
  assert(i == 0);
}
