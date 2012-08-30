// Dilshad Sallo, 29.7.2012
// Using "explicit" keyword with constructors to prevent implicit conversion.

#include <cassert>
#include <string>

class A{
public:
  A() = default;
  A(const int i) : x(i) {}
  int get_value() const { return x;}
  const A operator+ (const A& a) const {
    A temp;
    temp.x = x + a.x;
    return temp;
  }
private:
  int x;
};

class B {
public:
    B() = default;
    explicit B(int i) : y(i) {} // prevent implicit conversion
 const B operator+ (const B& b) const {
  B temp;
 temp.y = y + b.y;
 return temp;
}
private:
 int y;
};
int main() {
  A a1 = 1; // implicit conversion
  assert(a1.get_value() == 1);
  A a2 = a1 + 2; //implicit conversion
  assert(a2.get_value() == 3);

  //B b = 1; // Error : implicit conversion is not allowed
  //B b2 = b + 3; // Error : implicit conversion is not allowed
}
