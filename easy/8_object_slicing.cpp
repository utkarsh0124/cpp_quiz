#include <iostream>

class A {
public:
  virtual void f() { std::cout << "A"; }
};

class B : public A {
public:
  void f() { std::cout << "B"; }
};

void g(A a) { a.f(); }

int main() {
  B b;
  g(b);
}




















//You might expect that because f() is virtual, and you’re passing a B object,
//it should call B::f() and print:B, 
//But the actual output is:A
//The culprit here is a fundamental C++ rule known as object slicing.

//you’re passing b by value to g.
//That means the compiler copies b into the parameter a.

//But a is of type A — not a reference or pointer to a base class.
//So only the A part of b gets copied into a.

//The derived (B) part is sliced off — lost forever.
//The object inside g is now a plain A object, not a B.
//
//Even though f() is virtual, runtime polymorphism only works when the object being called through is actually a polymorphic base — 
//i.e., when you access it through a pointer or reference.
//
//How to get it to print B? -> replace g(A a) => g(A& a)
