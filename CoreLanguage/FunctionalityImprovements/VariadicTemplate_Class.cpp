// Dilshad Sallo, 12.8.2012
// Using variadic template with class called "Generic" that except
// a varialbe number of template parameter and mix classed according to that variable.

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

class Base {
public:
  Base(const int i) : i(i) {}
  int Base_get() const {return i;}
private:
  const int i;
};

template<typename T>
class Derived : public T{
public:
  Derived(const T& t) : T(t) {}
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

  Generic<Derived<Base>> db(Base(3));
  assert(db.Base_get() == 3);

  Generic<Derived<Base>,A,B> all(Base(4),A(5),B(6));
  assert(all.Base_get() == 4);
  assert(all.A_get() == 5);
  assert(all.B_get() == 6);
}
