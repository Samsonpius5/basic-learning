// search and count odd numbers

#include <iostream>
void CountSearch(int arr[], int n){
    std::cout << "The odd numbers are: ";
    
    int first=0;
        

for (int i=0; i<n; i++){

    if(arr[i] % 2 !=0){

        first++;

        int odd = arr[i];

        std::cout<<odd<<" "<<"\n";
    
        }


    }

    
    std::cout<<" The number of odd number are: "<<first<<"\n";
  

}

int main() {
    int set[7] = {2,4,7,2,6,7,9};
    int n = 7;

    CountSearch(set,n);
}
