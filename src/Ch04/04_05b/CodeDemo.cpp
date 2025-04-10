#include <iostream>

struct Character {
    int health;
    int strength;
};

Character* createCharacter(int health, int strength) {
    Character* newCharacter = new Character;
    newCharacter->health = health;
    newCharacter->strength = strength;
    return newCharacter;
}

int main() {
    Character* hero = createCharacter(100, 50);
    std::cout << "Health: " << hero->health << std::endl;
    std::cout << "Strength: " << hero->strength << std::endl;
    delete hero;
    return 0;
}