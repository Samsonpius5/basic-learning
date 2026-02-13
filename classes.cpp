#include <iostream>
class Human{
    public:
        std::string name;
        std::string occupation;
        int age;
        
        void eat(){
            std::cout<<"He can eat";
        }
        void drink(){
            std::cout<<"He can drink";
        }

        void dance(){
            std::cout<<"He can dance";
        }
};
    

    int main(){
        Human human1;
        human1.name = "Samson";
        human1.occupation = "student";
        human1.age = 27;

        std::cout<<human1.name<<"\n";
        std::cout<<human1.occupation <<"\n";
        std::cout<<human1.age <<"\n";

        return 0;

    }