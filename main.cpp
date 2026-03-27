#include<iostream>


int main(){

    int num1 = 8;
    int num2 = 2;
    int soma, subt, mult, div;

    soma = num1 + num2;
    subt = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    std::cout << "Soma: " << soma << std::endl;
    std::cout << "Subtração: " << subt << std::endl;
    std::cout << "Multiplicação: " << mult << std::endl;
    std::cout << "Divisão: " << div << std::endl;

    return 0;
}

