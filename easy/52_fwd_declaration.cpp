#include <iostream>

class A;

class B {
public:
  B() { std::cout << "B"; }
  friend B A::createB();
};

class A {
public:
  A() { std::cout << "A"; }

  B createB() { return B(); }
};

int main() {
  A a;
  B b = a.createB();
}































//A is only forward-declared (class A;) in line 3
//Problematic line : friend B A::createB();
//The compiler does not yet know anything about A::createB
//So it cannot verify that A::createB exists or even that it returns a B
//Hence, the compiler says something like:
//error: invalid use of incomplete type ‘class A’
//error: ‘A’ has not been declared
