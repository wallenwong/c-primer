#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<string>v;
    string s;

    cout<<"请输入一组词语："<<endl;

    while(cin>>s)
    {
        v.push_back(s);
    }

    for(auto &s1:v)
    {
        for(auto &s2:s1)
        {
            s2=toupper(s2);
        }

        cout<<s1<<" ";
    }

    cout<<endl;

    return 0;
}