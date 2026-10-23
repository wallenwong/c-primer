#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string>v;
    string s;

    while(cin>>s)
    {
        v.push_back(s);
    }

    for(auto i:v)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    return 0;
}