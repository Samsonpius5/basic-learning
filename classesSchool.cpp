// learning classes
#include <iostream>
class School{
    private:
        int age;

    public:
        std::string name;

        void setage(int a){
        if (age > 0){
            age=a;
        }
    }
        int getage(){
            return age;
        }
        void displayinfo (){
            std::cout<<"name: "<< name << "\n";
            std::cout<<"age: "<< age << "\n";

        }



};

int main(){
    School Sammy;
    Sammy.name = "sammy";
    Sammy.setage(20);
    Sammy.displayinfo();

    return 0;
}
    

