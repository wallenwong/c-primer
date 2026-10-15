#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2;

    cin>>s1>>s2;

    if(s1.size()==s2.size())
    {
        cout<<"两个字符串的长度相等"<<endl;
    }
    else if(s1.size()>s2.size())
    {
        cout<<"较长的字符串是："<<s1<<endl;
    }
    else
    {
        cout<<"较长的字符串是："<<s2<<endl;
    }

    return 0;
}