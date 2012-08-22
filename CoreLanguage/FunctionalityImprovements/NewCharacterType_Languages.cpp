// Dilshad Sallo, 21.8.2012
// Using new character types ( char16_t and char32_t)
// to represent Unicode Characters for "hello" word  in Arabic language.

#include <string.h>
#include <cassert>

int main() {
  const char16_t *arabic = u"مرحبا";
  const char16_t *arabic_unicode = u"\u0645\u0631\u062D\u0628\u0627";
  assert(arabic_unicode == arabic);
}
