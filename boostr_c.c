#include <boost/regex.hpp>
#include <boost/algorithm/string.hpp>
#include <iostream>
#include <string>

extern "C" {

  char * boostr_hello(char *f) {
    std::string str = "";
    str += f;

    char *p = (char *)malloc(sizeof(char)*4096);
    memset(p, 0, sizeof(char)*4096);
    sprintf(p, "Hello+%s", str.c_str() ); 
    std::string s = "Boost Libraries.";
    boost::regex expr{"\\w+\\s\\w+"};
    std::cout << std::boolalpha << boost::regex_match(s, expr) << '\n';
    std::cout << boost::algorithm::to_upper_copy(s) << std::endl;
    return p;
  }

  void boostr_ip(char *f) {
    std::string s = "Boost Libraries.";
    boost::regex expr{"\\w+\\s\\w+"};
    std::cout << std::boolalpha << boost::regex_match(s, expr) << '\n';
    std::cout << boost::algorithm::to_upper_copy(s) << std::endl;
  }

}
