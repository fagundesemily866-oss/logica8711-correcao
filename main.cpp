 #include <iostream>

int main(){

    int numeros[5];
    int maior = 0;

    std::cout << "========= 3. ENCONTRAR MAIOR ==========" << std::endl;

    for(int i = 0; i < 5; i++){
        std::cout << "Digite o numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
    }
    maior = numeros[0];
    for(int i = 0; i < 5; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
    }
    std::cout << std::endl;
    std::cout<<" o maior numero digitado foi: "<<maior<<std::endl;
    return 0;
}









    
 