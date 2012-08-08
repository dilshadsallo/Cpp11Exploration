// Dilshad Sallo, 8.8.2012
// Using the "constexpr" keyword to make return function as constant at compile-time
// , and then used to specifying the bounds of an array.

#include <cassert>

constexpr int getsize (int i) { return i * i;}

int main() {
  int array[getsize(3) + 6] = {0};
  for(auto i = 0; i<15; i++){
    assert(array[i] == 0);
  }
}
