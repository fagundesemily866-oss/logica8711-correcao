#include<iostream>
#include<string>

struct Pessoa{


    std::string nome;
    int idade;
    float altura;
};

int main(){

Pessoa p1 = {"Carla", 20, 1.55};
Pessoa p2 = {"Joao", 25, 1.80};


std::cout<<p1.nome<<" tem "<<p1.idade<<" anos "<<" e mede "<<p1.altura<<"m"<<std::endl;
std::cout<<p2.nome<<" tem "<<p2.idade<<" anos "<<" e mede "<<p2.altura<<"m"<<std::endl;


    return 0;
}
