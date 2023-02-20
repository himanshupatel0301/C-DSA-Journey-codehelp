#include<iostream>
using namespace std;

int tocheck_prime(int num)
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
    int num;
    cout<<"Enter a number to chack prime"<<endl;
    cin>>num;
    if(tocheck_prime(num))
    {
        cout<<"This is a prime number"<<endl;
    }
    else
    {
        cout<<"This is not a prime number"<<endl;
    }
    return 0;
}