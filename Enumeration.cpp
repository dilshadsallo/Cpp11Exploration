// Dilshad Sallo, 18.3.2012
// Enumeration class allow to define clear underlying type and explicit scope.
#include <iostream>

enum class MyEnumLong : unsigned long { 
  EnumValueLong1,
  EnumValueLong2 = 10,
  EnumValueLong3
};

int main() {

 MyEnumLong e1 = MyEnumLong::EnumValueLong2; // Explicit scope.
 
}