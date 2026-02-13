#include <iostream>
class Citizen{
    private:
        char language;

    public:
        Citizen (char lang){
            language = lang;

        }
        
    //method
    void sayHello(){

        if (language == 'e'){
            std::cout<<"Hello"<<"\n";
        }
        else if (language == 'f') {
            std::cout << "Bonjour\n";
        }
        else if (language == 'g'){
            std::cout<<"Guten Tag"<<"\n";
        }
        else if (language == 's'){
            std::cout<<"Hola"<<"\n";
        }
        else if (language == 'd'){
            std::cout<<"Goeiedag"<<"\n";
        }
        else{
            std::cout<<"Unknown Language"<<"\n";
        }
    }

};

int main (){
    Citizen citizen1('f');
    Citizen citizen2('d');
    Citizen citizen3('s');

    citizen1.sayHello();
    citizen2.sayHello();  
    citizen3.sayHello();

    return 0;
}
