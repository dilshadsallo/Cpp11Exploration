// Dilshad Sallo, 25.8.2012
// Defining Constant Expression Constructor and then defining object that is used at compile time to compute perimeter and specify the size of array.

#include <cassert>

class Rectangle {
public:
  constexpr Rectangle(int i, int j) : width(i), height(j) {}
  constexpr int get_width() { return width;}
  constexpr int get_height() { return height;}
  constexpr int getPerimeter() { return (width + height) * 2; }
  private:
  const int width;
  const int height;
};

int main() {
  constexpr Rectangle rect(2,3);
  constexpr int Perimeter = rect.getPerimeter();// compute a perimeter at compile-time
  assert(Perimeter == 10);

  // using object to define the size of array at runtime
  constexpr int multidimensional[rect.get_width()][rect.get_height()] = {{0}};
  assert(multidimensional[0][0] == 0);
}
