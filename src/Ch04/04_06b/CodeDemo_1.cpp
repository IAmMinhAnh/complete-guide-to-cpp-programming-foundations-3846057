#include <iostream>
#include <vector>

int main() {
    std::vector <int> number = {1, 2, 3, 4};
    std::cout << number.size() << std::endl;
    std::cout << number.capacity() << std::endl;

    number.push_back(5);
    std::cout << number.size() << std::endl;
    std::cout << number.capacity() << std::endl;

    std::cout << number[0] << std::endl;
}