#include <iostream>

void maximo(int a, int b) {
    if (a > b) {
        std::cout << a;
    } else {
        std::cout << b;
    }
}

int main() {
    int a, b;
    std::cin >> a >> b;

    maximo(a, b);
    
    return 0;
}