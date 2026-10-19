#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s=string("hel\0lo",6);
    int i=0;


    while(s[i]!='\0')
    {
        s[i]='x';
        ++i;
    }

    cout<<s<<endl;

    return 0;
}