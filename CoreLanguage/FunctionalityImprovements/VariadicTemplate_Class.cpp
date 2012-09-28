/**
 * \author Dilshad Sallo
 * \date 2012/8/12
 * \class Generic
 * \brief Using "initializer-list" explicitly within constructor.
 *
 * This class has user-defined constructor that takes template
 * class "initializer_list" to initializer data members (array) of class C.
 */


#include <cassert>
#include <iostream>

class A{
public:
  A(const int i) : i(i){}
  int A_get() const { return i; }
private:
  const int i;
};

class B {
public:
  B(const int i) : i(i) {}
  int B_get() const {return i;}
private:
  const int i;
};

class C {
public:
  C(const int i) : i(i) {}
  int C_get() const {return i;}
private:
  const int i;
};

template<typename T>
class D : public T{
public:
  D(const T& t) : T(t) {}
};

// variadic template
template <typename... Tn>
class Generic : public Tn... {
public:
  Generic(const Tn&...tn) : Tn(tn)...{}
};

int main() {
  Generic<A> a(A(1));
  assert(a.A_get() == 1);

  Generic<A,B> ab(A(2),B(2));
  assert(ab.A_get() == 2);
  assert(ab.B_get() == 2);

  Generic<D<C>> dc(C(3));
  assert(dc.C_get() == 3);

  Generic<D<A>,C,B> all(A(4),C(5),B(6));
  assert(all.A_get() == 4);
  assert(all.C_get() == 5);
  assert(all.B_get() == 6);
}
