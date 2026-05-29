#include <iostream>
 void tabuada(int numero, int multiplicador){
    if(multiplicador == 0){
        return;
    }
    tabuada(numero, multiplicador - 1);
    std::cout<<numero<<" x "<<multiplicador<<" = "<<numero * multiplicador<<std::endl;
 }

int main(){ 

   int numero;
   int multiplicador;
   int num1, num2;

   std::cout<<" Digite um valor para num1: "<<std::endl;
   std::cin>>num1;
   std::cout<<" Digite um valor para num2: "<<std::endl;
   std::cin>>num2;
   tabuada(num1, num2);
}