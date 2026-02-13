#include <iostream>
int main (){
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    if (n==1){
        std::cout<<"Monday";

    }
    else if(n==2){
        std::cout<<"Tuesday";

    }
    else if(n==3){
        std::cout<<"wednesday";
    }
    else if(n==4){
        std::cout<<"Thursday";
    }

    else if(n==5){
        std::cout<<"Friday";
    }
    else if(n==6){
        std::cout<<"Saturday";
    }
    else if(n==7){
        std::cout<<"friday";
    }
    else
        if(n<1 || n>7){
        std::cout<<"invalid number";
    }







    return 0;
}
