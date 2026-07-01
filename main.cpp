#include <iostream>

int main(){

int numeros [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int tamanho = 10;
int buscado;

    std::cout << "========= 6. CONTAR ELEMENTOS ==========" << std::endl;
    std::cout<<std::endl; 

    std::cout<<"====== TOTAL DE ELEMENTOS ======="<<std::endl;

    std::cout<<"Array: ";
    for(int i = 0; i < tamanho; i++){ 
        std::cout<<numeros[i]<<" ";
    }
     std::cout<<std::endl; 

    std::cout<<"NUMERO A BUSCAR"<<std::endl;
    std::cin>>buscado;

    int posicao = -1;
    for(int i = 0; i < tamanho; i++){
          if(numeros[i] == buscado){
            posicao = i;
            break;
        }
    }
       std::cout<<std::endl;
    if(posicao != -1){
        std::cout<<"Encontrado na posicao "<<std::endl;
    }else{
        std::cout<<"Nao encontrado!"<<std::endl;
    }
    return 0;
       }







    
 