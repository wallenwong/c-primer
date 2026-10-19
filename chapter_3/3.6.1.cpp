#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;

    cout<<"输入的字符串是（可以包含空格）："<<endl;

    getline(cin,s);

    for(auto &c:s)
    {
        c='x';
    }

    cout<<"输出的替换的字符串为："<<s<<endl;

    return 0;
}
