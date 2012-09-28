/**
 * \author Dilshad Sallo
 * \date 2012/8/26
 * \class C
 * \brief Implementing move assignment operator by using rvalue references.
 */

#include <iostream>

class C {
public:
  C() = default;
  C(int i) : i(i), p(new int [i]) { std::cout << "Normal constructor." << std::endl;}
  C(const C&) = default;
  C& operator=(const C&) { std::cout << "Copy assignment Operator." << std::endl; return *this; }
  C& operator=(C&& c);
private:
  int i;
  int* p;
};

C& C::operator=(C&& c) {
  std::cout << "Move assignment operator." << std::endl;
  //check for self-assignment
  if(this == &c) {
    return *this;
  } else {
  // Free the existing resource.
   delete [] p;

  // shallow copy of data
  i = c.i;
  p = c.p;

  //Reset the source object
  c.i = 0;
  c.p = 0;//nullptr;
  }
  
  return *this; 
}

C createObject() {
  return C(1);
}
int main() {
 C c1(5);
 c1 = createObject(); // move assignment operator because return object is temporary 
  C c2(3);
  c2 = (std::move(c1)); // call move assignment operator
  C c3;
  c3 = c1;// copy assignment operator
}
