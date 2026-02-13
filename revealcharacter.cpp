// revealing character 
#include <iostream>

int main(){
    char word [100];
    char n;

    std::cout<<"Enter a word: ";
    std::cin>>word;

    std::cout<<"Enter one character: ";
    std::cin >> n;

    

    for(int i=0; word[i]!='\0'; i++){
        if(n == word[i]){

            std::cout<<n;
            
        

        }else{
            std::cout<<"-";



        }
    

    }

   




return 0;

}
