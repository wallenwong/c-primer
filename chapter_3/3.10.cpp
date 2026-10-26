#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;

    getline(cin,s);

    for(auto &c:s)
    {
        if(ispunct(c))
        {
            c='\0';
        }
    }

    cout<<"去掉标点符号的字符串是："<<s<<endl;

    return 0;
}