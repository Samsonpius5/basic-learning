#include<iostream>
int main(){
    char words[100];
    char letter;
    std::cout<<"Enter words: ";
    std::cin>> words;

    std::cout<<"Enter a character: ";
    std::cin>> letter;

    for(int i=0; words[i]!='\0'; i++){

        if (words[i]==letter){
            
            std::cout<<letter;
        }
        else{
            std::cout<<"-";
        }


    }






    return 0;
}