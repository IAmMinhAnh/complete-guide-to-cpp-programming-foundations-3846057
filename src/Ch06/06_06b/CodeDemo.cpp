#include<iostream>
#include<string>

void createZombie(const std::string& name = "Zombie", int health = 100) {
    std::cout << name << " has " << health << " health points." << std::endl;
}

int main() {
    createZombie();

    createZombie("Minh Anh");

    createZombie("Tien Dung", 150);

    std::cout << std::endl << std::endl;
    return 0;
}