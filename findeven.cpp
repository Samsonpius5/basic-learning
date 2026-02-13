// finding even and how many even numbers are in an array

#include <iostream>
    void evenNumbers(int arr[], int n){

        
       int count =0;

        for(int i = 0; i< n; i++) {
            if(arr[i] % 2 == 0 ){

                count ++;
    

            }

        }
            

            std::cout<< count++; 
        
    }


    int main(){

        int number[8] ={5,8,4,20,7,9,2,4};
        int n = 8;

        evenNumbers (number, n);

        return 0;
    }