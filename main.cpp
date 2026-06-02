#include<iostream>

int main(){

 int numero = 42;
 int* ptr = &numero;

std::cout<<"Acesar via variavel: "<<numero<<std::endl;
std::cout<<"Acesar via ponteiro: "<<*ptr<<std::endl;


    return 0;
}
