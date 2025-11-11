#include <iostream>

class A {
  int foo = 0;

public:
  int& getFoo() { return foo; }
  void printFoo() { std::cout << foo; }
};

int main() {
  A a;

  auto bar = a.getFoo();
  ++bar;

  a.printFoo();
}



























//This is the line to focu
//auto bar = a.getFoo();
//
//getFoo() returns a reference to a.foo.
//
//However, because auto deduces by value unless you explicitly use auto&,
//here bar becomes a copy of the value returned.
//this is same as doing :
//int bar=a.getFoo(); 
//in both cases bar is a copy of value returned by getFoo()
//if reference is required, use auto& or int&
