// Dilshad Sallo, 22.8.2012
// Using "auto" keyword to declare initializer_list.

#include <initializer_list>
#include <cassert>

int main() {
  std::initializer_list<int> il = {1,2,3,4};
  auto i = {1,2,3,4};

  for(auto x = il.begin(), y = i.begin(); x != il.end(); x++ , y++) {
  assert(*x == *y);
  }
}
