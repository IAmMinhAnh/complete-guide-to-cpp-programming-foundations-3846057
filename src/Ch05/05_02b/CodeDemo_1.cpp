#include <iostream>
#include <string>

int main() {
    int candy = 12;

    std::string result = (candy >= 20)? "Too Much Candy" : "Good Amount";

    std::cout << "Result: " << result << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}