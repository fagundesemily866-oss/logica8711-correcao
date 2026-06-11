#include <iostream>

int mdc(int a , int b){
    if(b == 0) return a;
    return mdc (b, a % b);
}
int main (){
    std::cout<<"mdc(48,18) = "<<mdc(48, 18)<<std::endl;
    std::cout<<"mdc(100, 50) ="<<mdc(100, 50)<<std::endl;

return 0;
}
