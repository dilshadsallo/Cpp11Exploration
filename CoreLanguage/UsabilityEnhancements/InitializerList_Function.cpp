// Dilshad Sallo, 4.7.2012
// Using "initializer-list" explicitly within function.

#include <cassert>
#include <initializer_list>

double av(std::initializer_list<double> il) {
  double total = 0;
  int elements = il.size();
  for(auto p = il.begin(); p != il.end(); p++) {
    total += *p;
  }
  return(total/elements);
}

int main() {
  double average = av({10,20,30,40,50,60,70});
  assert(average == 40);
}
