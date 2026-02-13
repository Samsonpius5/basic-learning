#include <iostream>
    void score(int arr[], int n){
        if (n == 0) return;
      int  greatestFromleft= arr[0];

        for(int i = 1; i<n; i++){

        if (greatestFromleft < arr[i]){
        greatestFromleft = arr[i];
        

        }
        }
        std::cout<<greatestFromleft;

    }

    int main(){

        int number[8] ={5,8,4,20,7,9,2,4};
        int n = 8;

        score(number, n);
    }

