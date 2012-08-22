// Dilshad Sallo  27.6.2012
// Using "delete" keyword to prevent compiler
// from using operator new.

class C {
public :
  void *operator new(std::size_t) = delete;
  void *operator new[](std::size_t) = delete;
};

int main() {
  //C *p = new C;
  //C *p1 = new C[3];
}
