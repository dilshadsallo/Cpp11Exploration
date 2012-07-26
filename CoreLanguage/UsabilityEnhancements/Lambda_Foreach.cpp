// Dilshad Sallo, 26.7.2012
// Using lambda expression as a third parameter for Standard Library algorithm such as for_each,
// to account a number and sum of odd numbers.

#include <cassert>
#include <algorithm>
#include <vector>

int main() {
  std::vector<int> vec = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int sum = 0;
  int countofodd  = 0;
  std::for_each(vec.begin(), vec.end(), [=, &sum, &countofodd] (int x){ if(x%2 != 0){countofodd++; sum += x;}});

  assert(sum == 64);
  assert(countofodd == 8);  
}
