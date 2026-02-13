#include <iostream>
#include <string>


class church_members
{
public:
    std::string name;
    std::string department;
    std:: string car;
    int age;

    void displayinformation(){
        std::cout<<"====Details of members====\n";
        std::cout<<"name of member is: "<<name<<"\n";
        std::cout<<"Department of member is: "<< department<<"\n";
        std::cout<<"Car driven by member is a: "<<car<<"\n";
        std::cout<<"Age of member: "<<age<<"\n";
    }
};

int main () {
    church_members member1;
    church_members member2;
    
    std::cout<<"Enter your full name: ";
    std::getline(std::cin, member1.name);

    std::cout<<"What is your department: ";
    std::getline(std::cin, member1.department);

    std::cout<<"What Car do you drive: ";
    std::getline(std::cin, member1.car);

    std::cout<<"How old are you: ";
    std::cin >> member1.age;

    

    std::cout<<"Enter your full name: ";
    std::getline(std::cin, member2.name);

    std::cout<<"What is your department: ";
    std::getline(std::cin, member2.department);

    std::cout<<"What Car do you drive: ";
    std::getline(std::cin, member2.car);

    std::cout<<"How old are you: ";
    std::cin >> member2.age;

    member1.displayinformation();
    member2.displayinformation();


    return 0;
}


