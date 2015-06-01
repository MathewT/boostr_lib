#include <boost/regex.hpp>
#include <boost/algorithm/string.hpp>
#include <iostream>
#include <string>

extern "C" {

  char * boostr_hello(char *f) {
    std::string str = "";
    str += f;

    char *p = 0x0;

    return p;
  }

  void boostr_ip() {
    std::string s = "Boost Libraries.";
    boost::regex expr{"\\w+\\s\\w+"};
    std::cout << std::boolalpha << boost::regex_match(s, expr) << '\n';
    std::cout << boost::algorithm::to_upper_copy(s) << std::endl;
  }

}
