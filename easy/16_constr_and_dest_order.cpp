#include <iostream>

class A {
public:
  A() { std::cout << 'a'; }
  ~A() { std::cout << 'A'; }
};

class B {
public:
  B() { std::cout << 'b'; }
  ~B() { std::cout << 'B'; }
  A a;
};

int main() { B b; }




















// since members are evaluated first, A a will be evaluated first then constructor.
// since there is no constructor initializing A, compiler will call the default initializer for A and call its constructor

// Let’s expand the sequence in terms of what really happens in memory and time:
//Allocate storage for b
//The compiler reserves enough memory for a B object (which includes the embedded A a).
//Construct members (in declaration order)
//Before any user code in B() runs, each data member must be constructed.
//For B, the only member is A a;.
//Since we didn’t write anything in an initializer list (B() : a(...) {}), the compiler looks for a default constructor for A.
//So it calls A() — before entering the body of B().
//Run B’s constructor body
//After all members are fully constructed, the compiler executes the code inside { ... } of B().

//When main() ends, b goes out of scope.
//Destruction happens in reverse order of construction./
