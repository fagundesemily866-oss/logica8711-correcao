#include<iostream>
#include<string>


int main(){

  std::string nome;
  int idade;
  int anoatual = 2026;
  int anonascimento;


 std::cout<< "Qual é o seu nome?";
 std::cin>> nome;


  std::cout<< "Qual é a sua idade?";
  std::cin>> idade;

  anonascimento = anoatual - idade;

  std::cout<< "Olá, " << nome << "! Você nasceu em " << anonascimento << ".";







return 0;
}