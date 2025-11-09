#include <iostream>
struct X {
  virtual void f() const { std::cout << "X"; }
};

struct Y : public X {
  void f() const { std::cout << "Y"; }
};

void print(const X &x) { x.f(); }

int main() {
  X arr[1];
  Y y1;
  arr[0] = y1;
  print(y1);
  print(arr[0]);
}

































// The answer is YX, but not because of runtime polymorphism, but because of Object Slicing
// arr[0] is an X object, not an X& or X*.
// y1 is a Y object, which can be converted to an X by slicing.
// 
// When you assign a derived object (Y) to a base object (X), only the base portion of Y is copied into arr[0].
//That means:
//The extra part of Y that overrides f() is lost.
//arr[0] becomes a pure X object, not a Y.
