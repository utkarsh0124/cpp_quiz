#include <iostream>

struct A {
  A() { std::cout << "A"; }
};
struct B {
  B() { std::cout << "B"; }
};

class C {
public:
  C(): a(), b() {}

private:
  B b;
  A a;
};

int main()
{
    C();
}












// The A and B objects are constructed only via initializer list, but the order of initialization is always determined by the delaration order
// B is declared first and A is declared second, so the initilizer list will construct B and then A
// Member declaration does not initialize the objects, it only defines the oreder of construction
// 
// If no initializer list was present, the compiler will genarate a default initilizer list and construct the objects in the order of declaration 


//When the C object is being constructed, C++ guarantees a specific sequence:
//
//Base classes are constructed first (if any).
//
//Member objects (like b and a) are constructed next,
//in the order of declaration inside the class, not the order in the constructor body.
//
//Then the constructor body of C runs.

