#include <iostream>
#include <cmath>
int main(){
    double k;
    std::cout<<"enter a number: ";
    std::cin>> k;

    

    while(k < 1000){
        std::cout<<std::floor(k)<<" ";
        k=k +(1/3.0 * k);
       
        
        




    }







    return 0;
}