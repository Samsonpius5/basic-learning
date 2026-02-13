#include <iostream>
int main(){
    int arr[3] ={2, 4, 6,};

    int sum = arr[0];

    for(int i=0; i<=2; i++){

        sum= sum + arr[i];

    }

    std::cout<<sum;


    return 0;
}

