#include <iostream>

int main() {
    int idade;

    int opcaoPagamento;
    int qtdParafuso;
    float valorParafuso = 1.20;
    float valortotalparafuso;
    float desconto;

    std::cout << "Digite a quantidade de parafusos desejada: ";
    std::cin >> qtdParafuso;

    valortotalparafuso = qtdParafuso * valorParafuso;

    std::cout << "digite a quantidade de parafusos desejada: ";
    std::cin >> qtdParafuso;

    valortotalparafuso = qtdParafuso * valorParafuso;

    std::cout<<" a forma de pagamento e : "<<std::endl;
    std::cout<<"--- 1 - pix ---"<<std::endl;
    std::cout<<"--- 2 - dinheiro ---"<<std::endl;
    std::cout<<"--- 3 - cartao de credito ---"<<std::endl;
    std::cin>> opcaoPagamento;

    if(opcaoPagamento == 1){
        std::cout<<"O valor total a ser pago e: "<<valortotalparafuso * 0.95<<std::endl;
    } else if(opcaoPagamento == 2){
        desconto = valortotalparafuso * 0.90;
    std::cout<<"sua compra ficou no valor total de : "<<desconto<<std::endl;
    } else if(opcaoPagamento == 3){
        std::cout<<"O valor total a ser pago e: "<<valortotalparafuso<<std::endl;
    }

    return 0;
}
