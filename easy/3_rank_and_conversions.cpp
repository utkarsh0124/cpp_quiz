#include <iostream>

void f(int) { std::cout << 1; }
void f(unsigned) { std::cout << 2; }

int main() {
    f(-2.5);
}

























//RANKS 

//The compiler ranks conversions
//The compiler tries to pick the better function based on the conversion sequence’s rank.
//The ranks are (from best to worst):
// 1. Exact match
// 2. Promotion
// 3. Conversion

//PROMOTIONS:
//C++ considers only these 4 as promotions
//bool->int 
//char->int 
//short->int 
//float->double

//Anything else is just a conversion, not a promotion.


//In this case: since -2.5 is a double;
//double → int → conversion
//double → unsigned → conversion
//Both are of equal rank (they’re both conversions)

//The key rule:
//When two viable functions require standard conversions of the same rank,
//neither is considered better than the other unless one conversion is a promotion and the other isn’t.
