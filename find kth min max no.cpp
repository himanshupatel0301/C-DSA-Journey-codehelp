#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        int temp = i;
        for(int j = i+1;j<n;j++)
        {
            if(arr[j]<arr[temp])
            {
                temp = j;
            }
            swap(arr[temp],arr[i]);
        }
    }
}

void print(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void kth(int arr[],int n,int k)
{
    cout<<"kth min"<<"   "<<arr[k+1];
cout<<endl;
    cout<<"kth max"<<"   "<<arr[n-k];

}

int main()
{
    int k,arr[10] = {5,6,3,2,9,8,9,7,14,10};
    selectionsort(arr,10);

    print(arr,10);
    cout<<"enter the key for k th min and max\n";
    cin>>k;
   kth(arr,10,k);

}
