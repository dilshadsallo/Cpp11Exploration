// Dilshad Sallo, 3.7.2012
// Using Uniform initialization (brace-initialization) to implicitly initialize object return.

#include <cassert>

class C {
public:
  C(int x , int y) : a(x), b(y) {}
  C get(int, int);
  void check ();
private:
  int a,b;
};

C C::get(int i, int j) {
  return {i, j};  // implicitly initialize object return.
}

void C::check() {
  static int i = 0;
  assert( a == 1+i);
  assert( b == 2+i);
  i+=2;
}

int main() {
  C c1{1,2};
  C c2 = c1.get(3,4);

  c1.check();
  c2.check();

}
