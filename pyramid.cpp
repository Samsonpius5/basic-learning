#include<iostream>
using namespace std;

int main()

{
    int n;
    cout<<"enter a number in between 1 and 7 : ";

    abc:
    cin>> n;

    if (n==1)
    
    {
        cout<<"monday";
    }
    else if (n==2)
    {
        cout<<"Tuesday";
    }
    else if (n==3)
    {
        cout<<"wednesday";
    }
    else if (n==4)
    {
        cout<<"thursday";
    }
    else if (n==5)
    {
        cout<<"friday";
    }
    else if (n==6)
    {
        cout<<"saturday";
    }
    else if (n==7)
    {
        cout<<"sunday";
    }
    else
    {
        cout<<"invalid number \n";
        cout << "Enter a valid number : ";
        
        goto abc;
    }
    

    return 0;
}