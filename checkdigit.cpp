#include<iostream>
using namespace std;
int main()
{
    int num;
     int count  = 0;
    //enter a number 
    cout<<"Enter a number"<<endl;
    cin>>num;
    while(num!=0)
    {
        int rem;
       
        rem = num % 10;
        count++;
        num = num/10;

    }
    if(count == 1 || count == 0)
    {
        cout<<"It's a single digit number"<<endl;
    }
    else if(count == 2)
    {
        cout<<"It's a double digit number"<<endl;
    }
    else
    {
        cout<<"It's a bigger digit number"<<endl;
    }
    return 0;
}