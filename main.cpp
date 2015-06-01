
#include <iostream>
#include <string>

extern "C"  {
  void boostr_ip();
}

int main()
{
  std::string line = "hello world";
  std::cout << line << std::endl;
  boostr_ip();
}
