#include <iostream>
#include <string>

int main() {
    int score = 85;
    std::string result = (score >= 85) ? "Pass":"Fail";

    std::cout << "Result: " << result << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}