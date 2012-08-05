// Dilshad Sallo, 6.8.2012
// Using template alias "using" keyword with template, and without specifying explicit types. 

#include <map>
#include <string>

template <typename T1, typename T2>
struct A{
  using type_map = std::map<T1,T2>; // T1 and T2 are not explicit types.
};

template <typename T1>
struct B{
  using type_map = std::map<T1,char>;
};

int main() {
  A<char,std::string>::type_map dictionary;
  dictionary['A'] = "apple";
  dictionary['B'] = "banana";

  B<int>::type_map id;
  id[1] = 'A';
  id[2] = 'B';
}
