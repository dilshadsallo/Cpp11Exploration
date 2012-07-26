// Dilshad Sallo, 26.7.2012
// Lambda expression that have explicit return type.

#include <cassert>
#include <string>

int main() {
  auto result = [] (const std::string& str) -> std::string {
    return ("Department of " + str + " Science");
  }("Computer");

  assert (result == "Department of Computer Science");
}
