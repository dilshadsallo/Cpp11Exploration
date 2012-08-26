// Dilshad Sallo, 26.04.2012
// Using final keyword to mark function as non-overridable

#include <cassert>

class Base {
public:
  Base() : x(2) {};
  virtual int get_value() const { return x;}

  // final keyword marks this function as non-overrideable
  virtual int multi_value() const final { return x * x;}
protected:
  const int x;
};

class Derived : Base {
public:
  virtual int get_value() const { return x;}

  // override final function will cause a compiler error
  // virtual int multi_value() const { return x*x;}
};

int main() {
 Base b;
 Derived d;

 assert(b.get_value() == 2);
 assert(b.multi_value() == 4);

 assert(d.get_value() == 2);
 //assert(d.multi_value() == 4);
}
