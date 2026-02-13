#include <iostream>
    int main(){
        int n;
        const int subject = 3;
        std::cout<<"How many Student are in class: ";
        std::cin>>n;

        int** Reportsheet = new int *[n];

        //create collumns

            for(int i=0; i<n; i++){
                Reportsheet[i] = new int [subject];
            }

//input mark

    for(int i=0; i< n; i++){
        std::cout<<"Enter mark for student "<<i +1<<": "<<"\n";
            for(int j =0; j<subject; j++){
            std::cout << "subject "<<j+1<<": ";
            std::cin>> Reportsheet[i][j];
            }
    }
//calculate and print average
    std::cout<<"Average mark for: ";
        for(int i = 0; i<n; i++){
            int sum =0.0;

            for (int j=0; j<subject; j++){
                sum = sum+ Reportsheet[i][j];
            }
            double average = sum /3.0;
            std::cout<<"student "<<i+1<<": "<<average<<"\n";

        }

        //free memory
        for (int i =0; i<n; i++){
            delete [] Reportsheet[i];
        }
        delete[] Reportsheet;

        return 0;
    }