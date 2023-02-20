#include<iostream>
using namespace std;

int To_check_prime_num(int num)
{
    for(int i = 2; i<num; i++)
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
    cout<<"All prime number from 200 to 300"<<endl;
    for(int i = 200;i<=300;i++)
    {
        if(To_check_prime_num(i))
        {
            cout<<i<<" ";
        }
        
    }
 
}