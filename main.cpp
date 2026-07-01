#include <iostream>

int main(){

    int numeros[5];

    std::cout << "========= 9. INVERTER ARRAY ==========" << std::endl;

    // Leitura dos 5 números
    for(int i = 0; i < 5; i++){
        std::cout << "Digite o numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
    }

    // Exibição em ordem inversa
    std::cout << "Array em ordem inversa: ";
    for(int i = 4; i >= 0; i--){
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}






    
 