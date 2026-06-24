











   







#include<iostream>

int main(){


    int matriz[3][4] = {
        {10, 25, 5, 40},
        {15, 8, 30, 12},
        {20, 3, 18, 35}
    };

    int maior = matriz[0][0];
    int menor = matriz[0][0];
    int linhaM = 0, colunaM = 0;
    int linhaN = 0, colunaN = 0;

    std::cout<<"==== MIN E MAX EM MATRIZ"<<std::endl;

    std::cout<<"Matriz: "<<std::endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            std::cout<<matriz[i][j]<<" ";

            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                linhaM = i;
                colunaM = j;
            }
        }
    }
std::cout<<std::endl;
std::cout<<"Maior: "<<maior<<"na posicao["<<linhaM<<"]["<<colunaM<<"]"<<std::endl;
std::cout<<"Menor: "<<menor<<"na posicao["<<linhaN<<"]["<<colunaN<<"]"<<std::endl;
}








    
