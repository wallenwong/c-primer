#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    char s1='x';

    cout<<"输入的字符串是："<<endl;
    cin>>s;

    for(auto &c:s)
    {
        c=s1;
    }

    cout<<"替换为的字符串是："<<s<<endl;

    return 0;
}