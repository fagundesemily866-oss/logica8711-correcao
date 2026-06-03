#include<iostream>
#include<string>

struct Pessoa{
    std::string nome;
    int idade;
    float altura;
};

int main(){

   Pessoa p1;
   p1.nome = "emily";
   p1.idade = 16;
   p1.altura = 1.65;

std::cout<<"Nome: "<<p1.nome<<std::endl;
std::cout<<"Idade: "<<p1.idade<<std::endl;
std::cout<<"Altura: "<<p1.altura<<std::endl;


    return 0;
}
