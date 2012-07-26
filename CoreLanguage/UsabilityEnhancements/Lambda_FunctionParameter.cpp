// Dilshad Sallo, 26.7.2012
// Using lambda expression as parameter with std::function.

#include <functional>
#include <initializer_list>
#include <cassert>

int total(const std::initializer_list<int> il, std::function<int(int)> f){
  int sum;
  for(auto i: il ){
    sum = f(i);
  }
  return sum;
}

int main() {
  int sum = 0;
  int result = total({1,2,3,4,5}, [&sum](int num){ return sum += num;});
  assert(result == 15);
}
