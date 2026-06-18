#include<iostream>
#include<string>

struct Jogador{
    std::string nome;
    int cartaoAmarelo;
    int cartaoVermelho;
};

int main(){
std::cout<<"==========REGISTRO DE CARTOES======="<<std::endl;
std::cout<<std::endl;

Jogador jogador;

std::cout<<"Nome do jogador: "<<std::endl;
std::cin>>jogador.nome;

std::cout<<"Cartoes amarelos: "<<std::endl;
std::cin>>jogador.cartaoAmarelo;

std::cout<<"Cartoes vermelhos: "<<std::endl;
std::cin>>jogador.cartaoVermelho;

std::cout<<std::endl;
std::cout<<"===========SITUACAO======"<<std::endl;

if(jogador.cartaoVermelho > 0){
    std::cout<<jogador.nome<<" foi expulso!"<<std::endl;
}else if(jogador.cartaoAmarelo >= 2){
    std::cout<<jogador.cartaoAmarelo<<"recebeu 2 amarelos e foi expulso!"<<std::endl;
}else if(jogador.cartaoAmarelo == 1){ 
std::cout<<jogador.nome<<" recebeu 1 amarelo. Cuidado!"<<std::endl;
}else{ 
    std::cout<<jogador.nome<<" esta limpo! "<<std::endl;
}
}




   
















    
