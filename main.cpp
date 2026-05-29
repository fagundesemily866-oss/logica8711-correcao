#include <iostream>

int contarDigitos(int n){ 
    if(n == 0) return 0;
 

    return 1 + contarDigitos(n / 10);
}

int main() {
    int numeroUsuario;

    std::cout<<"Digite um numero inteiro: ";
    std::cin>>numeroUsuario;
  


if(numeroUsuario < 1){
    std::cout<<"O numero 0 tem 1 digito.\n";
}else{
    std::cout<<"O numero "<<numeroUsuario<<" tem "<< contarDigitos ( numeroUsuario )<<" digitos.\n";
}

    return 0;
}



   