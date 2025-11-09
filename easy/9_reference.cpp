#include <iostream>

int f(int &a, int &b) {
  a = 3;
  b = 4;
  return a + b;
}

int main() {
  int a = 1;
  int b = 2;
  int c = f(a, a);
  std::cout << a << b << c;
}
















// inside f-> both a and b are reference to main::a => modifying any will update main::a
// in main, after f(a,a) call, only a was passed not b, b remains unmodified
