#include <iostream>

enum A : const int volatile { x, y, z };

int main() {
  A a = A::x;
  a = A::y;
  std::cout << "ok";
}