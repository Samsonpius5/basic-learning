#include <iostream>
int FindingSecondLeast(int arr[], int n){

    int greatestnumber = arr [0];

    for(int i=1; i<n; i++){
        if(greatestnumber < arr [i]){

            greatestnumber = arr [i];
        }

    }

    
    int secondgreatest = 0;


    for(int i=1; i<n; i++){
        if(arr[i]< greatestnumber && arr[i]> secondgreatest){

            secondgreatest = arr [i];
        }

    }
    std::cout<<secondgreatest;

}


    

int main(){

        int number[8] ={5,8,16,20,7,9,2,4};
        int n = 8;

        FindingSecondLeast(number, n);

        

 return 0;
    }