#include <iostream>
using namespace std;

    int main()
    {
        int no_of_row;
        cout<<"Enter a no. of rows in triangle";
        cin>>no_of_row;
        // enter a row and colum        cin>>col;
        for(int row = 0;row<no_of_row;row++)
        {
            for(int col = 0;col<no_of_row-row-1 ;col++)
            {
                cout<<" ";
            }
            for(int str = 0;str < row+1;str++)
            {

                cout<<"* ";
            }
            cout<<endl;
        }
        for(int row = 0;row<no_of_row;row++)
        {
            for(int col = 0;col<row  ;col++)
            {
                cout<<" ";
            }
            for(int str = 0;str < no_of_row-row;str++)
            {

                cout<<"* ";
            }
            cout<<endl;
        }
    }

 // namespace std;
