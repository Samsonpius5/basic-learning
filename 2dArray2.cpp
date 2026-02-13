#include <iostream>
    int main(){
        int student;
        const int subject =3;

        std::cout<<"Enter number of student: ";
        std::cin>> student;

        int** reportcard= new int*[student];

        //create column
        for(int i=0; i<subject; i++){
        reportcard[i]= new int[subject];
        }

        // input mark
        for(int i= 0; i<student; i++){
            std::cout<<"Enter mark for student "<<i+1<<": ";
            for(int j=0; j<subject; j++){
            std::cout << "subject "<<j+1<<": ";
            std::cin>>reportcard[i][j];
            }
        }

        //calculate and print average

        std::cout<<"Average mark for: ";
            for(int i=0; i <student; i++){

                int sum =0.0;

                for(int j=0; j< subject; j++){
                    sum = sum + reportcard[i][j];

                }
                double average = sum/3;
                std::cout<<"student "<<i+1<<": "<<average<<"\n";
            } 

            // free memory

            for (int i=0; i<student; i++){
                delete[] reportcard[i];
            }
            delete[] reportcard;


        return 0;
    }