#include <iostream>

int main() {

int num1, num2, soma, subt, mult;
float div;
int op;

std::cout<<"Digite aqui o valor para numero 1: ";
std::cin>>num1;

std::cout<<"Digite o valor para numero 2: ";
std::cin>>num2;

std::cout<<"-------Escolha a operacao -----------"<<std::endl;
std::cout<<"1. Soma"<<std::endl;
std::cout<<"2. Subtracao"<<std::endl;
std::cout<<"3. Multiplicacao"<<std::endl;
std::cout<<"4. Divisao"<<std::endl;
std::cin>>op;

switch (op)
{
case 1:
    soma = num1 + num2;
    std::cout<<"O resultado da soma é: "<<soma<<std::endl;
    break;
case 2:
    subt = num1 - num2;
    std::cout<<"O resultado da subtração é: "<<subt<<std::endl;
    break;
case 3:
    mult = num1 * num2;
    std::cout<<"O resultado da multiplicação é: "<<mult<<std::endl;
    break;
case 4:
    div = num1 / num2;
    std::cout<<"O resultado da divisão é: "<<div<<std::endl;
    break;
}





    return 0;
}








  
















 






















