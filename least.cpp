#include <iostream>
    int diff_number(int num[], int n){

        int First_num = num[0];
        int first_num1= num[0];

        for(int i = 1; i< n; i++) {
            if(First_num < num[i]){
               First_num = num[i];
                

            }

        }

        for(int i = 1; i< n; i++) {
            if(first_num1 > num[i]){
               first_num1 = num[i];
            }
        }
        int diffrence = first_num1 - First_num;

        std::cout<<diffrence;
            

       
    }


    int main(){

        int number[8] ={5,8,4,20,7,9,2,4};
        int n = 8;

        diff_number(number, n);
    }