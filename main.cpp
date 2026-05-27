#include<iostream>
#include<tuple>
#include<string> 

int main(){
    std::tuple<int, std::string, double> aluno(1,"Emily", 9.5);

     auto myTuple = std::make_tuple(1, "Emily", 9.5);

    
    std::cout<< "Id: "<<std::get<0>(aluno)<<"\n";
    std::cout<< "Nome: "<<std::get<1>(aluno)<<"\n";
    std::cout<< "Nota: "<<std::get<2>(aluno)<<"\n";

 

    return 0;
}


 





   