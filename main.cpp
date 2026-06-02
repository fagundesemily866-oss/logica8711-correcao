#include<cctype>
#include<iostream>
#include<string>

bool ehPalindromo(std::string str){
    int inicio = 0;
    int fim = str.length() - 1;

    while(inicio < fim){
        if(str[inicio] != str[fim]){
            return false;
        }
        inicio++;
        fim--;
    }

    return true;
}

int main() {

    std::string palavra;

    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;

    for(int i = 0; i < palavra.length(); i++){
        palavra[i] = std::tolower(palavra[i]);
    }
    std::cout << ehPalindromo(palavra) << std::endl;

    return 0;
}

