#include <iostream>

int main(){

    int numeros[8];
    float soma = 0;
    float media = 0;

    std::cout << "========= 12. NUMEROS ACIMA DA MEDIA ==========" << std::endl;

    for(int i = 0; i < 8; i++){
        std::cout << "Digite o numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
        soma += numeros[i];
    }

    media = soma / 8;

    std::cout << "Media: " << media << std::endl;

    std::cout << "Numeros acima da media: ";
    for(int i = 0; i < 8; i++){
        if(numeros[i] > media){
            std::cout << numeros[i] << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}




    
 