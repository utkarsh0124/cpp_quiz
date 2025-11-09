#include <iostream>
#include <string>

int main() {
    std::string a = "a";

    auto a1 = [a]() {
        std::string a = "aa";
        return a;
    };

    std::cout << a1();
}