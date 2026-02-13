#include <iostream>
int main(){
int k;
int a=0, b=1;
std::cout<<"Enter a number: ";
std::cin>> k;

for(int i=1; i<=k; i++){
std::cout<<a<<" ";
int next= a + b;
a=b;
b=next;
}



    return 0;
}