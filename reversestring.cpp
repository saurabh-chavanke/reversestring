#include<iostream>
using namespace std;

string reverseString(string str1)
{
    int n=str1.length();

    for(int i=n-1;i>=0;i--)
    {
        cout<<str1[i];
    }
}
int main()
{
    string str;
    cout<<"Enter the String : "<<endl;
    cin>>str;

    reverseString(str);
    return 0;
}