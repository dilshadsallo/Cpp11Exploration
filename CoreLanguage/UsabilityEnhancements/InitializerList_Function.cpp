/**
 * \author Dilshad Sallo
 * \date 2012/7/4
 * \brief Using "initializer-list" explicitly within function.
 *
 * This program defines function called av that takes template
 * class "initializer_list" to receive a sequence of numbers and
 * return a average of them.
 */

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
