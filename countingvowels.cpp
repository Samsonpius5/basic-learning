// Write a program that counts the numbers of lower case vowels (a, e, i, o, u) and the number of digits

#include <iostream>
void count(char ch[]){

    int first= 0;
    int second=0;
    int third= 0;
    int fouth= 0;
    int fifth = 0;
    int number =0;


    for(int i=0; ch[i] != '\0'; i++){
        if(ch[i]=='#'){

            break;
        }

        else if (ch[i]=='a'){

            first++;
            
        }
        else if(ch[i]== 'e'){
            second++;
        }
        else if(ch[i]== 'i'){
            third++;
        }

        else if(ch[i]== 'o'){
            fouth++;
        }
        else if(ch[i]== 'u'){
            fifth++;
        }

        else if (ch[i]>='0'&& ch[i] <='9' ){

            number++;
        }

        
        else{

        }
        
    
        
        
    }

    std::cout<<"Number of 'a' is: "<<first<<"\n";
    std::cout<<"Number of 'e' is: "<<second<<"\n";
    std::cout<<"Number of 'i' is: "<<third<<"\n";
    std::cout<<"Number of 'o' is: "<<fouth<<"\n";
    std::cout<<"Number of 'u' is: "<<fifth<<"\n";
    std::cout<<"Number of 'number' is: "<<number;




}

int main(){

    char word[100];
    std::cout<<"enter any word and number: ";
    std::cin>>word;

    count(word);

    







    return 0;
}
