// Dilshad Sallo, 26.7.2012
// storing pointer to lambda expression that is used to invoke it.

#include <cassert>
#include <string>

int main() {

  auto result = [] (const std::string & str) { // result is pointer to lambda function.
    return ("Department of " + str + " Science");
  };

  assert(result("Computer") == "Department of Computer Science");
}
