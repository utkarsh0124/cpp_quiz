#include <iostream>
#include <utility>

struct A {
  A() = default;
  A(const A &a) { std::cout << '1'; }
  A(A &&a) { std::cout << '2'; }
};

A a;

int main() {
  [a = std::move(a)]() {
    [a = std::move(a)]() {};
  }();
}