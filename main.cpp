#include <iostream>

int main(){

    //brAmount: valor em reais | exchangeRate: valor do dólar | dollarAmount: valor em dólares
double brAmount, exchangeRate, dollarAmount;
int choice; //choice: escolha

std::cout<<"-------- Currency Converter: BRL to USD --------\n";

    //Entrada da taxa cambio (quanto vale 1 dolar hoje)
std::cout<<"Enter the current exchange rate (How much is 1 dollar in Reais? ): ";
std::cin>>exchangeRate;

    //Entrada da quantia em reais que a pessoa deseja converter
std::cout<<"Enter the amount in Reais you want to convert: ";
std::cin>>brAmount;

    //verificação lógica garante que o valor informado seja positivo
if(brAmount < 0){
    // calculo: divide o montante em reais pela taxa de câmbio para obter o valor em dólares
dollarAmount = brAmount / exchangeRate;
std::cout<<"You will have: $"<<dollarAmount<<" US Dollares.\n"<<std::endl;
}else
   // mensagem de erro caso o valor seja zero ou negativo
   std::cout<<"Error. Please enter a valid amount greater than zero.\n";

    return 0;
}









