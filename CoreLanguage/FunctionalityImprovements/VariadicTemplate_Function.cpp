/**
 * \author Dilshad Sallo
 * \date 2012/8/12
 *
 * Using variadic template parameters with function template
 * to provide type-safe variadic function.
 */

#include <cassert>
#include <string>

// global variables for storing values for each type of function.
int ivalue = 0;
double dvalue = 0;
char cvalue = ' ';
std::string svalue = "";

// prototype of functions
void specify_type(const int);
void specify_type(const double);
void specify_type(const char);
void specify_type(const std::string);

// base case that handle each argument.
template <typename T>
void f(T&& arg) {
  specify_type(arg);
}

// type-safe variadic function
template <typename T, typename... Tn>
void f(T&& value, Tn&&... args) {
  f(value); // call base case for each argument
  f(args...); // recursion
}
// functions for each type that could use
void specify_type(const int i) { ivalue = i;}
void specify_type(const double d) { dvalue = d;}
void specify_type(const std::string s) { svalue = s;}
void specify_type(const char c){cvalue = c;}

int main() {
  f(1);
  assert(ivalue == 1);

  f(2,3.4);
  assert(ivalue == 2);
  assert(dvalue == 3.4);

  f(3,4.5,"abc");
  assert(ivalue == 3);
  assert(dvalue == 4.5);
  assert(svalue == "abc");

  f(4,5.6,"def",'a');
  assert(ivalue == 4);
  assert(dvalue == 5.6);
  assert(svalue == "def");
  assert(cvalue == 'a');
}
