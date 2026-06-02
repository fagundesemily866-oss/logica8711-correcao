#include<cctype>
#include<iostream>
#include<string>

bool ehPalindromo(std::string s, int inicio, int fim) {
    while (inicio < fim){
        if (inicio >= fim){
            return true;
        }
        if(s[inicio] != s[fim]){
            return false;
        }
        return ehPalindromo(s, inicio + 1, fim - 1);
    }
}


int main(){

    std::string palavra;

    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;

    for (char &c : palavra) {
        c = std::tolower(c);
    }

    if(ehPalindromo(palavra, 0, palavra.length() - 1)){
        std::cout << "A palavra é um palíndromo." << std::endl;
    }else{       
        std::cout << "A palavra não é um palíndromo." << std::endl;
    }

    return 0;
}

