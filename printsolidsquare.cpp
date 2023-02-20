#include <iostream>
using namespace std;

    int main()
    {
        int no_of_row;
        cin>>no_of_row;
        // enter a row and colum        cin>>col;
        for(int row = 0;row<no_of_row;row++)
        {
            for(int col = 0;col<no_of_row ;col++)
            {
                cout<<"*";
            }
          cout<<endl; 
        }
    }

 // namespace std;
