#include <iostream>
#include <limits>

int main() {
  unsigned int i = std::numeric_limits<unsigned int>::max();
  std::cout << ++i;
}






















//In C++, unsigned integer overflow is well-defined (unlike signed integer overflow).
//When an unsigned integer exceeds its maximum representable value, it wraps around modulo 2ⁿ,
//where n is the number of bits in the type.
