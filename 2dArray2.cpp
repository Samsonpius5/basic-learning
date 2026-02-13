#include <iostream>
    int main(){
        int student;
        const int subject =3;

        std::cout<<"Enter number of student: ";
        std::cin>> student;

        int** reportsheet= new int*[student];

        //create column
        for(int i=0; i<subject; i++){
        reportsheet[i]= new int[subject];
        }

        // input mark
        for(int i= 0; i<student; i++){
            std::cout<<"Enter mark for student "<<i+1<<": ";
            for(int j=0; j<subject; j++){
            std::cout << "subject "<<j+1<<": ";
            std::cin>>reportsheet[i][j];
            }
        }

        //calculate and print average

        std::cout<<"Average mark for: ";
            for(int i=0; i <student; i++){

                int sum =0.0;

                for(int j=0; j< subject; j++){
                    sum = sum + reportsheet[i][j];

                }
                double average = sum/3;
                std::cout<<"student "<<i+1<<": "<<average<<"\n";
            } 

            // free memory

            for (int i=0; i<student; i++){
                delete[] reportsheet[i];
            }
            delete[] reportsheet;


        return 0;
    }