#include <iostream>
#include <cmath>

int calcularCubo(int num){
    return static_cast<int>(std::pow(num, 3));
}

int main(){

    int a;

    std::cout<<" Digite um numero inteiro: "<<std::endl;
    std::cin>>a;

    int cubo = calcularCubo(a);

    std::cout<<" O cubo de"<<a<<" é: "<<cubo<<std::endl;

}
 


    
 