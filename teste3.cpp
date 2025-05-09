#include <iostream>

int main() {
    int x;
    std::cin >> x;

    if (x%2 == 0) {
        std::cout << "Par\n";
    } else {
        std::cout << "Impar\n";
    }

    return 0;
}