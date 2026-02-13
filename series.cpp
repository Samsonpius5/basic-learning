#include <iostream>
int main(){
    
    for(double i = 1.9; i<=7100.0; i=i*2){
        if(i < 111.0){
            std::cout<<"*"<<i<<",";
        }
        else{
            std::cout<<i<<",";
        }


    }
    


return 0;
}