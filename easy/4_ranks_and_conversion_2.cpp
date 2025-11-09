#include <iostream>

void f(float) { std::cout << 1; }
void f(double) { std::cout << 2; }

int main() {
  f(2.5);
  f(2.5f);
}





// Refer Question : 3_rank_and_conversion.cpp for explanation
