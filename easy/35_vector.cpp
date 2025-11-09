#include <iostream>
#include <vector>

int main() {
  std::vector<int> v1(1, 2);
  std::vector<int> v2{ 1, 2 };
  std::cout << v1.size() << v2.size();
}

























//v1(1,2) is initializing a vector of size 1 with value 2 in it
//v2{1,2} is using list initialization where it is creating a vector of size 2 with {1,2} in it
