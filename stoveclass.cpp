#include <iostream>
class Stove{
    private: 
        int temperature = 0;


    public:
    int gettemperature(){
        return temperature;

    }
    void settemperature(int temperature){
        if (temperature >=10){
        this->temperature = 10;

    }
    else if(temperature<0) {
        this-> temperature = 0;
        
    }

    else{

    }
}

};

int main(){
    Stove heater;

    heater.settemperature(1000000);
    std::cout<<heater.gettemperature();

    






 return 0;   
}