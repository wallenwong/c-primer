#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int i=0;

    cin>>s;

    while(i<s.size())
    {
        s[i]='x';
        ++i;
    }

    cout<<s<<endl;

    return 0;
}