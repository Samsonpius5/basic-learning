//checking for world population percentage

#include <iostream>

int main(){

    int n;
    std::cout<<"enter the population of your country: ";
    std::cin>> n;

    float result;
    result = n/10000000000.0 *100.0;

    std::cout<<"The pecentage is: "<<result<<"%";






    return 0;
}