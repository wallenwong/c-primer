#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;

    while(getline(cin,s))
    {
        if(!s.empty())
        {
            cout<<"输出的结果是："<<s<<endl;
        }
    }

    return 0;
}