#include <iostream>
int main(){
    int n;

    std::cout<<"Enter a number: ";
    std::cin>> n;

    double harmonic = 0.0;


    for(int i=1; i<=n; i++){

        harmonic= harmonic + 1.0/i;
        
    }

    

    std::cout<<harmonic;











    return 0;
}