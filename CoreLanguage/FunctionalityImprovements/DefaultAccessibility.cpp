// Dilshad Sallo, 27.06.2012
// Using "default" keyword to change accessibility of special member functions.

class A {
public:
  A(const A& s) = default; // not needed
  A& operator=(const A& s) = default; // not needed
  ~A() = default; // not needed
protected:
  A() = default;
};

class B : A {};

int main() {
  // A a; // not possible
  B b;
}
