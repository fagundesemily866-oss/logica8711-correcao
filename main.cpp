#include <iostream>

int main() {
    

std::string nome;
float altura;
int idade;

std::cout << "Bem vindo, digite seu nome: ";
std::cin >> nome;
std::cout << "Digite sua altura: ";
std::cin >> altura;
std::cout << "Digite sua idade: ";
std::cin >> idade;

std::cout << "Nome: " << nome << std::endl;
std::cout << "Altura: " << altura << std::endl;
std::cout << "Idade: " << idade << std::endl;


if  (idade >= 10) {
    std::cout << "Voce se inscreveu na categoria infantil !!" << std::endl;
}else if (idade >= 18) {
    std::cout << "Voce se inscreveu na categoria adolescente !!" << std::endl;
}else if (idade >= 60) {
    std::cout << "Voce se inscreveu na categoria adulto !!" << std::endl;

std::cout << "Seja muito bem vindo " << nome << " a nossa competicao de natação !!" << std::endl;

} 

return 0;

}


 
