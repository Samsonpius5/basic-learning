//first project
#include <iostream>
#include <string>
#include <limits>
class Student{
    private:
        std::string name;
        int age;
        int grade;
    public:
        Student(std::string a,int b,int c ){
            name=a;
            age=b;
            grade=c;
        }

          
       void displayinfo(){
            std::cout<<"====student info=====\n";
            std::cout<<"name of student: "<< name<<"\n";
            std::cout<<"age of student: "<< age<<"\n";
            std::cout<<"grade of student: "<<"grade "<<grade<<"\n";

        }


};

int main(){
   
    int age;
    int grade;
    std::string name;

    std::cout<<"Enter Your name: ";
    std::getline(std::cin, name);

    std::cout<<"Enter your age: ";
    std::cin>>age;
    
    std::cout<<"Enter your grade: ";
    std::cin>>grade;
    std::cin.ignore();

    Student student1(name, age, grade);

    //student 2

      std::cout<<"Enter Your name: ";
    std::getline(std::cin, name);

    std::cout<<"Enter your age: ";
    std::cin>>age;
    
    std::cout<<"Enter your grade: ";
    std::cin>>grade;
    std::cin.ignore();

    Student student2(name, age, grade);

    //student 3

      std::cout<<"Enter Your name: ";
    std::getline(std::cin, name);

    std::cout<<"Enter your age: ";
    std::cin>>age;
    
    std::cout<<"Enter your grade: ";
    std::cin>>grade;
    std::cin.ignore();
    
    Student student3(name, age, grade);

    student1.displayinfo();
    student2.displayinfo();
    student3.displayinfo();
    

    


    return 0;
}