#include <iostream>

int main(){

int opcao;
std::string nome;
int idade;

std::cout<<"-----Escolha a opcao adequada-----"<<std::endl;
std::cout<<"Digite 1 para cadastrar ou 2 para sair"<<std::endl;
std::cin>>opcao;

if(opcao == 1){
    
    std::cout<<"Digite seu nome: ";
    std::cin>>nome;
    std::cout<<"Digite sua idade: ";
    std::cin>>idade;
    std::cout<<"Cadastro realizado com sucesso!"<<std::endl;

std::cout<<"Seu nome e : "<<nome<<std::endl;
std::cout<<"Sua idade e : "<<idade<<std::endl;

}else{

    std::cout<<"Ate a proxima!!!"<<std::endl;
}
     
     
    return 0;
}









