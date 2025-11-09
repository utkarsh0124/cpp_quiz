#include <iostream>

int main() {
  int a = 0;
  decltype(a) b = a;
  b++;
  std::cout << a << b;
}

























//decltype(a) gives the type of a, not its value or reference status in this context.
//Since a is declared as int, decltype(a) is simply int.
//
//so decltype(a) b = a; is calling sopy constructor and copying b into a.
