#include <iostream>

class A {
public:
  void f() { std::cout << "A"; }
};

class B : public A {
public:
  void f() { std::cout << "B"; }
};

void g(A &a) { a.f(); }

int main() {
  B b;
  g(b);
}











//Since no virtual func is there, no runtime polymorphism is performed (not vtable present)
//so f() will be called based on the type of object calling it. in this case: A
