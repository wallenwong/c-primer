#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int i=0;

    cin>>s;

    while(s[i]!='\n')
    {
        s[i]='x';
    }
}