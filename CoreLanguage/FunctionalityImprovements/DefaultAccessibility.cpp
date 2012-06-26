// Dilshad Sallo, 27.06.2012
// Using default keyword to change accessibility of special member functions.

#include<iostream>

class A {   
public:
  A(const A& s) = default;
  A& operator=(const A& s) = default;
  
protected:
  A() = default; 
  virtual ~A() = default;
};

class B : public A {
public:
  B();
};

B::B() : A()
{

}

int main() {
  B b1;
  
}