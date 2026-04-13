#include <iostream>

int main() {
    int idade;

    std::cout << "Digite a sua idade: " << std::endl;

    if (!(std::cin >> idade)) {
        std::cout << "Entrada inválida!" << std::endl;
        return 1;
    }

    if (idade < 0) {
        std::cout << "Idade inválida!" << std::endl;
    } else if (idade <= 2) {
        std::cout << "Você é um bebê!" << std::endl;
    } else if (idade <= 8) {
        std::cout << "Você é uma criança!" << std::endl;
    } else if (idade <= 16) {
        std::cout << "Você é um adolescente!" << std::endl;
    } else if (idade <= 60) {
        std::cout << "Você é um adulto!" << std::endl;
    } else {
        std::cout << "Você é um(a) sênior!" << std::endl;
    }

    return 0;
}