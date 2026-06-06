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
// C++ has integral promotions (for bool, small integer types, character types, and some enums) and 
// one floating-point promotion (float -> double). 

// Any integer type whose rank is less than int is promoted to int if int can represent all its values; 
// otherwise to unsigned int.

// Other implicit type changes are conversions rather than promotions.
//These are the promotions
/*
bool          -> int
char          -> int (or unsigned int)
signed char   -> int (or unsigned int)
unsigned char -> int (or unsigned int)
short         -> int (or unsigned int)
unsigned short-> int (or unsigned int)
wchar_t       -> int/unsigned int/... (implementation-dependent)
char8_t       -> int/unsigned int/... (since C++20)
char16_t      -> int/unsigned int/... 
char32_t      -> int/unsigned int/... 
enum types    -> int/unsigned int/... (under certain conditions)
*/

//Anything else is just a conversion, not a promotion.


//In this case: since -2.5 is a double;
//double → int → conversion
//double → unsigned → conversion
//Both are of equal rank (they’re both conversions)

//The key rule:
//When two viable functions require standard conversions of the same rank,
//neither is considered better than the other unless one conversion is a promotion and the other isn’t.
