#include <iostream>

int main(){ 

    int opcao;

    std::cout << "Digite um valor para opcao: " << std::endl;
    std::cin >> opcao;

switch (opcao) {
    case 1:
        std::cout << "Domingo!" << std::endl;
        break;
    case 2:
        std::cout << "Segunda!" << std::endl;
        break;
    case 3:
        std::cout << "Terca!" << std::endl;
        break;
    case 4:
        std::cout << "Quarta!" << std::endl;
        break;
    case 5:
        std::cout << "Quinta!" << std::endl;
        break;
    case 6:
        std::cout << "Sexta!" << std::endl;
        break;
    case 7:
        std::cout << "Sabado!" << std::endl;
        break;
    default:
    std::cout << "Numero invalido" << std::endl;
}

    return 0;
}






 
