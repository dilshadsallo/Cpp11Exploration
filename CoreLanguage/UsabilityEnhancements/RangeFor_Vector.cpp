/**
 * \author Dilshad Sallo
 * \date 2012/7/5
 * \brief Using range-based for statement with STL container (vector).
 */

#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> vec = {"Swansea", "University", "Computer", "Science"};

  for(const std::string i: vec) {
    std::cout << i << std::endl;

  }
}
