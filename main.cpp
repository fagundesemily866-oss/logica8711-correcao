#include<iostream>
#include<string>

struct CampeonatoCopa{
    int ano;
    std::string campeao;
};

int main(){
CampeonatoCopa copa[5] = {
    {2022, "Argentina"},
    {2018, "Franca"},
    {2014, "Alemanha"},
    {2010, "Espanha"},
    {2006, "Italia"},
};


std::cout<<"========Campeoes da Copa========"<<std::endl;
std::cout<<std::endl;

for(int i = 0; i < 5; i++){
    std::cout<<copa[i].ano<<" - Campeao: "<<copa[i].campeao<<std::endl;
}
 return 0;
}



   
















    
