// Dilshad Sallo, 21.8.2012
// Using new character types ( char16_t and char32_t)
// to represent Unicode Characters for "hello" word  in Arabic and Hindi languages.

#include <string.h>
#include <cassert>

int main() {
  const char16_t *arabic = u"مرحبا";
  const char32_t *hindi = U"नमस�?ते";

  const char16_t *arabic_unicode = u"\u0645\u0631\u062D\u0628\u0627";
  const char32_t *hindi_unicode = U"\u0928\u092E\u0938\u094D\u0924\u0947";

  assert(arabic_unicode == arabic);
  assert(hindi_unicode == hindi);
}
