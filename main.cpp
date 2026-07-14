#include <iostream>

int dobro(int x) {
    return x * 2;
}
void lerNumeros(int numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        std::cout << "Digite o numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
    }
}

void exibirNumerosEDobro(int numeros[], int tamanho) {
    std::cout << "Valores digitados e seus dobros:\n";
    for (int i = 0; i < tamanho; i++) {
        std::cout << "Numero: " << numeros[i]
                  << " | Dobro: " << dobro(numeros[i]) << std::endl;
    }
}

int main() {
    const int tamanho = 5;
    int numeros[tamanho];

    std::cout << "========= 1. LER E EXIBIR ==========" << std::endl;

    lerNumeros(numeros, tamanho);
    exibirNumerosEDobro(numeros, tamanho);

    return 0;
}
   


    
 