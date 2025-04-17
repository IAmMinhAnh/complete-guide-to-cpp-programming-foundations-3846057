// Complete Guide to C++ Programming Foundations
// Exercise 06_04
// Writing Functions, by Eduardo Corpeño 

#include <iostream>
#include <string>

std::string NameHolder();
int calculateScore(int x, int y);
void displayScore(const std::string& name, int score);

int main(){
    std::string name = NameHolder();

    int score = calculateScore(75, 25);

    displayScore(name, score);

    std::cout << std::endl << std::endl;
    return 0;
}

std::string NameHolder() {
    std::string name;
    std::cout << "What is your name? " << std::flush;
    std::cin >> name;
    return name;
}

int calculateScore(int x, int y) {
    return x*y;
}

void displayScore(const std::string& name, int score) {
    std::cout << name << " scored " << score << " points." << std::endl;
}


