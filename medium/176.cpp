#include <limits>
#include <iostream>

int main() {
    int sig = std::numeric_limits<int>::digits;
    int usig = std::numeric_limits<unsigned int>::digits;
    std::cout << (sig == usig);
}