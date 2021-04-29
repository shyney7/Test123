#include <iostream>

int main() {

    int ia[] = {1,2,3,4,5,6,7,8,9,10};

    std::cout << "Hallo ich bin Felix\n";
    std::cout << "Hallo ich bin Felix\n";
    std::cout << "Hallo ich bin Felix\n";
    std::cout << "Hallo ich bin Felix\n";
    std::cout << "Hallo ich bin Felix\n";
    std::cout << "Hallo ich bin Felix\n";
    std::cout << "Hallo ich bin Felix\n";
    std::cout << "Hallo ich bin Felix\n";       
    
    for (int i : ia) {
        std::cout << i << ", ";
    }

    return EXIT_SUCCESS;
}
