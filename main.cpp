#include <iostream>

int triplo(int x) {
    return x * x * x;
}


int main() {
    int a;
    
    std::cout<<" digite um numero "<<std::endl;
    std::cin>>a;
    
    int resultado = triplo(a);
    std::cout<<" o resultado e.."<<resultado;
    
     

    return 0;
}
   


    
 