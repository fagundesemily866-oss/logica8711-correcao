#include <iostream>

int main(){

    int numeros[5];
    float soma = 0;
    float media = 0;

    std::cout << "========= 5. CALCULAR MEDIA ==========" << std::endl;

    for(int i = 0; i < 5; i++){
        std::cout << "Digite o numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
        soma += numeros[i];
    }
    media = soma / 5;

    std::cout << "Numeros digitados: ";
    for(int i = 0; i < 5; i++){
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Soma: " << soma << std::endl;
    std::cout << "Media: " << media << std::endl;

    return 0;
}








    
 