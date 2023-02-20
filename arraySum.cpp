#include<iostream>
using namespace std;


void tosumavgofarr(int arr[],int n)
{
    int sum = 0;
     for(int i = 0;i<n;i++)
    {
        sum += arr[i];
    }
    cout<<"sum of array element  "<<sum<<endl;

    float avg_arr = float(sum)/n;
    cout<<"the average of array is "<<avg_arr;
}
int main()
{
    int n;
  
   

     cout<<"enter the number of element"<<endl;
     cin>>n;
     int arr[n] ;
    cout<<"enter a element for array";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
   
    tosumavgofarr(arr,n);

}