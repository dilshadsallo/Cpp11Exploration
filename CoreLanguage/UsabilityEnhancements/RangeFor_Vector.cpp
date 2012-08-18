// Dilshad Sallo, 5.7.2012
// Using range-based for statment with STL container (vector).

#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> vec = {"Swansea", "University", "Computer", "Science"};

  for(const std::string i: vec) {
    std::cout << i << std::endl;

  }
}
