#include<iostream>

int main(){
    int pilha[5];
    int topo = -1;
    int tamanho = 5;

    std::cout<<"Elementos empilhados: 10, 20, 30"<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Desempilhando..."<<std::endl;
    while(topo >= 0){
        std::cout<<"Removida: "<<pilha[topo]<<std::endl;
        topo --;
    }
    return 0;
}






   
















    
