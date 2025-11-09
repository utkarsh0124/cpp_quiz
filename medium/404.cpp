#include <iostream>

int main() {
  int n = 1;

  std::cout << (*reinterpret_cast<char *>(&n) == 1) << std::endl;
  return 0;
}