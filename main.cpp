#include <iostream>

int main(){
    int numeros[6] = {10, 20, 30, 40, 50, 60};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    std::cout << "========= 1. EXIBIR VALORES PREDEFINIDOS ==========" << std::endl;
    std::cout << "Numeros armazenados" << std::endl;

    for(int i = 0; i < tamanho; i++){
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}









    
