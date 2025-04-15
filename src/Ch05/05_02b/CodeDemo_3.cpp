#include <iostream>
#include <string>

int main() {
    int choice = 2;

    std::string difficulty = (choice == 1) ? "Easy": (choice == 2) ? "Medium": "Hard";

    std::cout << "Difficulty Level: " << difficulty << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}