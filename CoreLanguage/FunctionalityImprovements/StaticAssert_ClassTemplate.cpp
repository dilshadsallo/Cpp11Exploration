/**
 * \author Dilshad Sallo
 * \date 2012/7/1
 * \class C
 * \brief Using "static_assert" to assert template parameter before using inside class.
 */

#include <iostream>
#include <type_traits>

template <class T>
class C {
public:
  C(const T&, const T&, const T&);
  void print();
private:
  static_assert(std::is_integral<T>::value," type of T is not int.");
  static_assert(std::is_unsigned<T>::value," type of T is signed.");
  T seconds;
  T minutes;
  T hours;
};

template <class T>
C<T>::C(const T& hour, const T& min, const T& sec) {
  seconds = sec;
  minutes = min;
  hours = hour;
}

template <class T>
void C<T>::print() {
  std::cout << hours << ":" << minutes << ":" << seconds;
}

int main() {

  C <unsigned int> c(10,25,20);
  c.print();
}
