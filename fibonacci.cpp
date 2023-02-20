#include<iostream>
using namespace std;

int main()
{
    int num1 = 0 ;
    int num2 =  1;
    int sum = 0;
    int num;

    cout<<"enter a number"<<endl;
    cin>>num;
    cout<<0<<" "<<1<<" ";
    for(int i = 0;i<num;i++)
    {
       sum  = num1  + num2;
       num1 = num2;
       num2 = sum;
       cout<<"  "<<sum;
    }
    return 0;
}