/**
 * \author Dilshad Sallo
 * \date 2012/8/18
 * \brief Representing HTML code by using raw string literals.
 */

#include <iostream>
#include <string>

int main()
{
  std::string HTMLcode =

  R"(<HTML>
  <HEAD>
          <TITLE>Raw String Literals</TITLE>
  </HEAD>
  <BODY>
          <P> Representing HTML code by using raw string literals </P>
  </BODY>
  </HTML>
  )";

  std::cout << HTMLcode << std::endl;

}
