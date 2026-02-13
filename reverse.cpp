#include <iostream>
void reverseArray(int arr[], int n) {
    
    int start = 0;
    int end = n-1;
     
    while (start < end)
    {
        int temp = arr[start];
        arr [start]=arr[end];
        arr [end]=temp;

        start++;
        end--;
        
    }

    
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    

    }
}


    int main() {
    int set[6] = {2,4,7,2,6,7};
    int n = 6;

    reverseArray(set, n);

    

    return 0;
}