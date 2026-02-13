#include<iostream>
int main(){
    char words[100];
    std::cout<<" Enter random words: ";
    std::cin >> words;

    int aa = 0;
    int ee = 0;
    int ii = 0;
    int oo = 0;
    int uu = 0;
    int num = 0;

    for(int i= 0; words[i] != '\0'; i++){
        if(words[i]=='a'){
        aa++;
        }
        else if(words[i]=='e'){
            ee++;
        }

        else if(words[i]=='i'){
            ii++;
        }
        else if(words[i]=='o'){
            oo++;
        }
        else if(words[i]=='u'){
            uu++;
        }
        else if(words[i] >= '0' && words[i] <= '9'){
            num++;
        }

        else if (words[i]=='#'){

            break;


        }
        else{


        }


    }

        std::cout<<"vowels a: "<< aa<<"\n";
        std::cout<<"vowels e: "<< ee<<"\n";
        std::cout<<"vowel i: "<< ii<<"\n";
        std::cout<<"vowel o: "<< oo<<"\n";
        std::cout<<"vowels u: "<< uu<<"\n";
        std::cout<<"numbers: "<< num<<"\n";



    return 0;
}