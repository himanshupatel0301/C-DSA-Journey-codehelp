#include<iostream>
using namespace std;

void chunnu(char &str,char &end)
{
    char temp  = str;
    str = end;
    end = temp;

}
string reverseString(string  name)
{
    int strt = 0;
    int end = name.length()-1;
    while(strt<end)
    {
        chunnu(name[strt++],name[end--]);
    }
    return name;
}

int main()
{
    string  name = "chunnu";
   cout<< reverseString(name);
    
}