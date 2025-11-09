#include <iostream>

struct Quiz {};

void f(Quiz) { std::cout << "f1"; }
void f(Quiz &) { std::cout << "f2"; }

int main() { f(Quiz()); }