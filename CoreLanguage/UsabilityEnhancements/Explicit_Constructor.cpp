// Dilshad Sallo, 29.7.2012
// Using "explicit" keyword with constructors to prevent implicit converstion.

#include <cassert>
#include <string>
class A{
public:
  A() = default;
  explicit A(const int i) : x(i) {} // prevent implicit converstion
  A(const std::string& str): s(str) {}
  const A operator+ (const A& a) const;
  const std::string getstring() const { return s;}
private:
  int x;
  std::string s;
};

const A A::operator+(const A& a) const {
  A temp;
  temp.x = x + a.x;
  temp.s = s + a.s;
  return temp;
}

int main() {
  A a1("Computer ");
  std::string s = "Science";
  A a2 = a1 + s;
  assert(a2.getstring() == "Computer Science");

  A a3(1);
  //A a4 = a3 + 2; // Error: no match for ‘operator+’ in ‘a3 + 2’
}
