#include<iostream>
using namespace std;

int toCheckPalindrome(int num)
{
    int rem;
    int sum = 0;
    while(num!=0)
    {
        rem = num % 10;
        sum = sum*10 + rem;
        num = num/10;
    }
    return sum;
}

int main()
{
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    // to check palindrome
    int sum = toCheckPalindrome(num);
    if(sum == num)
    {
        cout<<"This number is palindrome"<<endl;

    }
    else{
        cout<<"this number is not a palindrome number"<<endl;
    }
    return 0;
}