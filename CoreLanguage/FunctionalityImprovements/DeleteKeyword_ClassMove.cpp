// Dilshad Sallo, 27.6.2012
// Using "delete" keyword to disable copies of copy constructor and
// assignment operator to make class move only.

#include <iostream>

class T {
public:
  T() = default;
  T(const T&) = delete;
  T& operator=(const T&) = delete;
  T(T&&) {}
  T& operator=(T&&) { return *this;}
};

int main() {
  T t1;
  T t2(std::move(t1));
  T t3;
  t3 = std::move(t2);
}
