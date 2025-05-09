#include <iostream>

int main() {
    double array[3];
    double soma, media;

    for (int i = 0; i < 3; i++) {
        std::cin >> array[i]; 
    }

    for (int i = 0; i < 3; i++) {
        soma += array[i];
    }
    media = soma/3;

    std::cout << media << "\n";

    return 0;
}