// Dilshad Sallo, 12.8.2012
//Using variadic template parameters with function template to provide type-safe variadic function
// that receive a variable number of parameters and store them according to their type.

#include <iostream>

// array for each type of argument
int int_array[10];
double double_array[10];
char char_array[10];

// variables that store index for each argument in array.
static int ivalue = 0;
static int dvalue = 0;
static int cvalue = 0;

// functions that take different type of argument and store them in arrays.
void specify_type(const int i) { int_array[ivalue++] = i; }
void specify_type(const double d) { double_array[dvalue++] = d;}
void specify_type(const char c) { char_array[cvalue++] = c;}

// base case that handle each argument.
template <typename T>
void f(T&& arg) {
  specify_type(arg);
}

// type-safe variadic function
template <typename T, typename... Tn>
void f(T&& value, Tn&&... args) {
  f(value); // call base case for each parameter
  f(args...); // recursion
}

int main() {
  f(1,2.3,'a',4.5,'b',6,7,'c','d',8,9.9,'e',11);

  // print array that hold integer values.
  for(int i = 0; i<ivalue; ) {
    std::cout << int_array[i++] << " ";
  }
  std::cout << std::endl;

  // print array that hold double values.
  for(int i = 0; i<dvalue; ) {
    std::cout << double_array[i++] << " ";
  }
  std::cout << std::endl;

  // print array that hold char values.
  for(int i = 0; i<cvalue; ) {
    std::cout << char_array[i++] << " ";
  }

}
