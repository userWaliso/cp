#include <iostream>

int main() {
    int a, b, result;
    std:: string sinal;
    std::cout << "Digite dois números e um sinal\n";
    std::cin >> a >> b >> sinal;

   if (sinal == "+") {
        result = a + b;
   } 
   else if (sinal == "-") {
        result = a - b;
   } 
   else if (sinal == "*") {
        result = a * b;
   } else if (sinal == "/") {
        result = a / b;
   } else {
    std::cout << "Sinal invalido\n";
    return 1;
   }
    std::cout << result << "\n";

    return 0;
}