#include <iostream>
#include <string>

int main() {
    int score = 75;
    int bonus = 10;

    std::string result = (score > 80)? "Excellent" : (score > 60)? ((score + bonus > 70)? "Good":"Average") : "Poor";

    std::cout << "Result: " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}