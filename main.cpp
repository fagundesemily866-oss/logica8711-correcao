#include <iostream>

int main(){

    int numeros[10];
    int maior;
    int menor;

    std::cout << "========= 13. MAIOR E MENOR ==========" << std::endl;

    for(int i = 0; i < 10; i++){
        std::cout << "Digite o numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
    }

    maior = numeros[0];
    menor = numeros[0];

    for(int i = 1; i < 10; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }

    std::cout << "Maior numero: " << maior << std::endl;
    std::cout << "Menor numero: " << menor << std::endl;

    return 0;
}



    
 