// Dilshad Sallo, 27.06.2012
// Using "default" keyword to change accessibility of special member functions.

class A {
public:
  A(const A& s) = default;
  A& operator=(const A& s) = default;
protected:
  A() = default;
  ~A() = default;
};

class B : public A {};

int main() {
  B b1;
}
