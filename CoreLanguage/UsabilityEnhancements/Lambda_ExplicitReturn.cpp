/**
 * \author Dilshad Sallo
 * \date 2012/7/26
 * \brief Lambda expression that have explicit return type.
 */

#include <cassert>
#include <string>

int main() {
  auto result = [] (const std::string& str) -> std::string {
    return ("Department of " + str + " Science");
  }("Computer");

  assert (result == "Department of Computer Science");
}
