#include <iostream>
double sumofArray (double arr[], int n){

        double sum = 0.0;

    
    for(int i=0; i<n; i++){

        sum = sum + arr[i];

        
}
        return sum;
}

        

    double avgofArray (double arr[], int n){

         double avg = 0.0;
         
         for(int i=0; i<n; i++){

            avg = avg + (arr[i]/n);
            

         }

         return avg;

    }
 

int main(){

        double number[8] ={5.0,8.0,16.0,20.0,7.0,9.0,2.0,4.0};
        int n =8;
        

        double resultofsum= sumofArray(number,n);
        float avgofsum=avgofArray(number, n);

        std::cout<<"The sum of the array is: "<< resultofsum<<"\n";
        std::cout<<"The average of the array is: "<< avgofsum<<"\n";     

return 0;
}

