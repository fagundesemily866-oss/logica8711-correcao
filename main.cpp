#include <iostream>
#include <thread> //para lidar com o tempo de execucao
#include <chrono> //para definir unidades de tempo (ms, segundos)

int main() {

    for(int i = 10; i >= 0; i--){
    std::cout<<"A bomba ira explodir em..."<<i<<std::endl;

    }

    std::this_thread::sleep_for(std::chrono::milliseconds(500)); 
 //seconds - > milliseconds







 return 0;

} 





 
