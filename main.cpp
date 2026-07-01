#include <iostream>

int main(){

    int numeros[10];
    int buscado;

    std::cout << "========= 11. BUSCAR ELEMENTO ==========" << std::endl;

    for(int i = 0; i < 10; i++){
        std::cout << "Digite o numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
    }

    std::cout << "Digite o numero que deseja buscar: ";
    std::cin >> buscado;

    int posicao = -1;
    for(int i = 0; i < 10; i++){
        if(numeros[i] == buscado){
            posicao = i;
            break;
        }
    }

    if(posicao != -1){
        std::cout << "Numero encontrado na posicao " << posicao << std::endl;
    }else{
        std::cout << "Numero nao encontrado no array." << std::endl;
    }

    return 0;
}





    
 