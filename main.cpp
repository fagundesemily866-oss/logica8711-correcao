#include<iostream>

bool eprimo(int numero){
    if(numero <= 1){
         return false;

      }

    for(int i = 2; i < numero; i++){
        if(numero % i == 0){ 
        return false;
       }
    }

    return true;
}
 int main(){
    int numero;

    std::cout << "Digite um numero: ";
    std::cin >> numero;

    if(eprimo(numero)){
        std::cout << numero << " é um número primo." << std::endl;
    } else {
        std::cout << numero << " não é um número primo." << std::endl;
    }

    return 0;
}

 





   