// Dilshad Sallo ,28.06.2012
// Defining user Raw literals to convert from binary to decimal and versa versa.

#include<iostream>
#include <cassert>
#include<string.h>

long int  operator"" _D(const char* s) {
  int dec = atoi(s);
  int rem, i = 1, sum = 0;
  
  do{
    rem = dec % 2;
    sum = sum + (i * rem);
    dec = dec / 2;
    i = i * 10;
  } while (dec > 0);
  return sum;
}

long int operator"" _B(const char* c) {
  int length = strlen(c);
  int sum = 0;
  int convert = 0;
  int base = 1;
  
  for (int i = length - 1; i >= 0; i--){
    convert = (c[i]- '0' ) ;
    sum += (convert * base);
    base *= 2;
  }
  return sum;
}

int main() {
  long int binary = 23_D;
  assert (binary == 10111);
  
  long int decimal = 10111_B;
  assert (decimal == 23);
}
