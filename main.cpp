#include<iostream>
#include<string>



int main(){


    std::string user;
    std::string senha;

    std::cout<<"digite seu usuario de acesso: ";
    std::cin>>user;

    std::cout<<"digite sua senha de acesso: ";
    std::cin>>senha;


    if(senha == "913006"){
        std::cout<<" O usuario "<<user<<" esta logado com sucesso!"<<std::endl;
    }else{
        std::cout<<" O usuario ou senha invalidos!"<<std::endl;
    }

return 0;
}