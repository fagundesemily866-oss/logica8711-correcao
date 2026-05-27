#include<iostream>

void imprimirAteN(int n){
   for(int i = n; i > 0; i--){
      std::cout<<n<< " ";
   }

}

int main(){
  int numero;
    std::cout << "Digite um numero: "<<std::endl;
    std::cin >> numero;

    imprimirAteN(numero);

    return 0;
}


    


   


 





   