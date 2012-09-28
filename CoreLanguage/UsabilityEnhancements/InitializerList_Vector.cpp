/**
 * \author Dilshad Sallo
 * \date 2012/7/4
 * \class C
 * \brief Using uniform initialization with standard library containers.
 *
 *  Using uniform initialization to initialize vector implicitly
 *  via template class "initializer_list".
 */

#include <string>
#include <cassert>
#include <vector>

int main() {
  std::vector<std::string> vec;
  vec.push_back("Computer");
  vec.push_back("Science");
  vec.push_back("Department");

  std::vector<std::string> vu = {"Computer", "Science", "Department"};
  assert(vu.at(0) == vec.at(0));
  assert(vu.at(1) == vec.at(1));
  assert(vu.at(2) == vec.at(2));
}
