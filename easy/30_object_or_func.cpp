#include <iostream>
struct X {
  X() { std::cout << "X"; }
};

int main() { X x(); }

































// Most Vexing Parse
// You might think it does: “Declare an object x of type X, which should print X.”
// But it doesn’t.

// X x(); does not create an object. Instead, the compiler interprets it as:
//A function declaration for a function named x that takes no parameters and returns an X

