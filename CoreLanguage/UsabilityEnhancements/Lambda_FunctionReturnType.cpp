// Dilshad Sallo, 26.7.2012
// Using lambda expression as return type for std::function.

#include <functional>
#include <cassert>

std::function<int(int)> m(int y) {
    return [=](int x)-> int {return x*y;};
}

int main() {
  std::function<int(int)> f = m(5);
  assert(f(3) == 15);
}
