#include <iostream>
#include <string>
class car{
    public:
        std::string name;
        std::string model;
        int model_number;

    car(std::string name, std::string model,int model_number){
        name = name;
        model = model;
        model_number = model_number;
    }


};

int main(){
    car car1 ( "toyota","camry", 64563);

    return 0;
}