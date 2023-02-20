#include<iostream>
using namespace std;


int check_Prime_number(int num)
{
    for(int i = 2;i<num;i++)
    {
        if(num%i == 0)
        {
            return 0;
        }
       
    }
     return 1;
}

int main()
{
        int num ;
        cout<<"Enter a number to Check prime number"<<endl;
        cin>>num;
        if(check_Prime_number(num) )
        {
            cout<<"This is a prime number"<<endl;

        }
        else{
            cout<<"this is not a prime number"<<endl;
        }
}