// Dilshad Sallo, 27.7.2012
// Using lambda expression with Standard Library algorithm (std::sort) to sort elements of vector.

#include <cassert>
#include <vector>
#include <algorithm>

int main() {
  std::vector<int> vec {4,5,2,6,1,3};
  std::sort(vec.begin(), vec.end(),[](int i, int j){return i < j;});

  int count = 0;
  for(auto i :vec) {
  assert(i == 1+count++);
  }
}
