#include <iostream>

int main(){

    int numeros[5];
    int menor = 0;

    std::cout << "========= 3. ENCONTRAR MENOR ==========" << std::endl;

    for(int i = 0; i < 5; i++){
        std::cout << "Digite o numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
    }

    menor = numeros[0];
    for(int i = 1; i < 5; i++){
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }

    std::cout << "O menor numero digitado foi: " << menor << std::endl;

    return 0;
}








    
 