/**
 * \author Dilshad Sallo
 * \date 2012/6/27
 * \class C
 * \brief Using "delete" keyword to prevent compiler from using operator new.
 */

#include <iostream>

class C {
public :
  void *operator new(std::size_t) = delete;
  void *operator new[](std::size_t) = delete;
};

int main() {
  //C *p = new C;
  //C *p1 = new C[3];
}
