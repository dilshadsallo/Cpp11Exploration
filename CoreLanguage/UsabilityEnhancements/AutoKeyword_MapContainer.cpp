// Dilshad Sallo, 20.07.2012
// using "auto" keyword to deduce the type of iterator, within range-based for syntax
// to print the the title of books and years of publication.

#include <iostream>
#include <string>
#include <map>
#include <vector>

int main() {
  // store titles of books and years of publication
  std::map<std::string,std::vector<unsigned int>> mv;
  mv["PROFESSIONAL C++"].push_back(2011);
  mv["PROFESSIONAL C++"].push_back(2005);
  mv["Big C++"].push_back(2009);
  mv["Big C++"].push_back(2005);

  // using traditional C++ syntax
  for(std::map<std::string, std::vector<unsigned int> >::const_iterator iter = mv.begin(); iter != mv.end(); ++iter ) {
  std::vector<unsigned int> tempVec = (*iter).second;
  std::cout <<"Book: " << (*iter).first << "," << " year of publication:";

  for (unsigned i = 0; i < tempVec.size(); i++) {
    std::cout << " " << tempVec[i];
  }
  std::cout << std::endl;
  }

  // Using C++11 syntax ( auto keyword and based-range for statement)
  for(auto iter : mv) {
  std::vector<unsigned int> tempVec = (iter).second;
  std::cout <<"Book: " << (iter).first << "," << " year of publication:";

  for (unsigned i = 0; i < tempVec.size(); i++) {
    std::cout << " " << tempVec[i];
  }
  std::cout << std::endl;
  }
}
