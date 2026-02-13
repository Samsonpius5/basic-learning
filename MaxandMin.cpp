// finding maximum and minimum in one loop
#include <iostream>
    void max_min(int arr[], int n){

    int maxmin= arr[0];
    int maxmin1= arr[0];


    for(int i=1; i<n; i++){

        if (maxmin > arr[i] || maxmin1 < arr[i]){

        maxmin = arr[i];
        maxmin1 =arr[i];

        std::cout<<"The Least number in this array is: "<<maxmin<<"\n";
        std::cout<<"The Maximum number in this array is: "<<maxmin1;

        }


    }


}
 int main(){

        int number[8] ={5,8,4,20,7,9,2,4};
        int n = 8;

        max_min (number, n);

        return 0;
    }
