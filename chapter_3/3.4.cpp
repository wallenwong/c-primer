#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2;

    cin>>s1>>s2;

    if(s1==s2)
    {
        cout<<"两个字符串相同"<<endl;
    }
    else if(s1>s2)
    {
        cout<<"较大的字符串是："<<s1<<endl;
    }

    return 0;
}