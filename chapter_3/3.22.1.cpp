#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<string>text;
    string s;
    while(getline(cin,s))
    {
        text.push_back(s);
    }
    for(auto it=text.begin();it!=text.end()&&!it->empty();++it)
    {
        for(auto c=it->begin();c!=it->end();++c)
        {
            *c=toupper(*c);
        }
        cout<<*it;
    }

    cout<<endl;

    return 0;
}