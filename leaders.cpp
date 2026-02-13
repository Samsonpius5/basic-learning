#include <iostream>
void findLeaderArray(int arr[], int n){

    if (n == 0) return;
    
        
    int maxFromRight = arr[n-1];
    

    for(int i = n-2; i>=0; i--){

       if (arr[i] > maxFromRight){

        maxFromRight = arr[i];
        std::cout << maxFromRight<<" ";

        

       }

    }
 }

 int main(){
        
            int leader[8] = {4, 6, 5, 8, 4, 2, 7, 2};
            int n = 8;

        
            findLeaderArray(leader, n);


    return 0;
 }
    