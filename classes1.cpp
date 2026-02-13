#include <iostream> 
#include <string>
    class School{
        public:
            std::string name;
            int grade;
            int age;
        void displayinfo(){
          std::cout<<"====displayinfo=====\n";
          std::cout<<"name of student: "<< name<<"\n"; 
          std::cout<<"grade of student: "<< "grade "<<grade<<"\n";  
          std::cout<<"age of student: "<< age<<"\n"; 

        }
        void sport(){
        std::cout<<name<<" likes to play football";
        }

        void food(){
            std::cout<<name<<"loves egusi soup";
        }
        
    };


    int main(){

        School student1;
            std::cout<<"Enter your name: ";
            std::getline(std::cin, student1.name);

            std::cout<<"Enter your grade: ";
            std::cin>>student1.grade;

            std::cout<<"Enter your age: ";
            std::cin>>student1.age;

            
            student1.displayinfo();


       

    return 0;
    }


        