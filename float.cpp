#include <iostream>
int main(){
    int n;
    std::cout<<"Enter your number: ";
    std::cin>>n;

    int result =n;

    result  = n + 5;
    if(result > 10){
        result = 20;
    }else{
        result =1;
    }

    std::cout<<result;




    return 0;
}
