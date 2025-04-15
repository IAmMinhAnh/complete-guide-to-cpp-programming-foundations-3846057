#include <iostream>
#include <string>

int main() {
    int health = 0;

    std::string status = (health > 0) ? "Alive":"Dead";

    std::cout << "Player is " << status << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}