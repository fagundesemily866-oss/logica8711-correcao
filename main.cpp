#include<iostream>

int main(){
    int fila [10];
    int fim = -1;
    int inicio;
    int opcao;

    std::cout << "=== FILA COM MENU ===" << std::endl;
    while(true){
        std::cout<<"1 - Enfileirar"<<std::endl;
        std::cout<<"2 - Desenfileirar"<<std::endl;
        std::cout<<"3 - Exibir fila"<<std::endl;
        std::cout<<"4 - Sair"<<std::endl;
        std::cout<<"Escolha: ";
        std::cin>>opcao;

        if(opcao == 1){
            if(fim < 9){
                int valor;
                std::cout<<"Digite o valor: ";
                std::cin>>valor;

                inicio++;
                fila[inicio] = valor;
                std::cout<<"Enfileirado!"<<std::endl;
            }else{
                std::cout<<"Fila cheia"<<std::endl;
            }
        }
        else if(opcao == 2){
            if(inicio < fim){
                std::cout<<"Removido: "<<fila[inicio]<<std::endl;
                inicio++;
            }else{
                std::cout<<"Fila vazia!"<<std::endl;
            }
        }
        else if(opcao == 3){
            if(inicio < fim){
                std::cout<<"fila: ";
                for(int i = inicio; i < fim; i++){
                    std::cout << fila[i] << " ";
                }
                std::cout << std::endl;
            }else{
                std::cout<<"Fila vazia!"<<std::endl;
            }
        }
        else if(opcao == 4){
            std::cout<<"Saindo..."<<std::endl;
            break;
        }
    }

    return 0;
}




   
















    
