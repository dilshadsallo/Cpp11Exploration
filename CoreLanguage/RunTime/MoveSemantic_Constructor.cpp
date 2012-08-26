// Dilshad Sallo, 26.8.2012
// Implementing move constructor by using rvalue references.

#include <iostream>
#include <vector>

class C {
public:
  C(int);
  C(C&& c);
private:
  int n;
  int* p;
};

C::C(int i) : n(i), p(new int[i]) {
  std::cout << "Normal Constructor." << std::endl;
}

C::C(C&& c) : n(c.n), p(c.p)  {
  std::cout << "Move constructor." <<std::endl;

  //Reset the source object
  c.n = 0;
  c.p = nullptr;
}

int main() {
  std::vector<C> v;
  v.push_back(C(10));
  v.push_back(C(20));
}
