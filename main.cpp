#include <iostream>

int main(){

    int numeros[10];
    int contador = 0;

    std::cout << "========= 10. CONTAR OCORRENCIAS ==========" << std::endl;

    // Leitura dos 10 números
    for(int i = 0; i < 10; i++){
        std::cout << "Digite o numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
    }

    // Contagem de quantas vezes o 5 aparece
    for(int i = 0; i < 10; i++){
        if(numeros[i] == 5){
            contador++;
        }
    }

    std::cout << "O numero 5 apareceu " << contador << " vezes." << std::endl;

    return 0;
}






    
 