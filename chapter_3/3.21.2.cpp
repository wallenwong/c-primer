#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1; 
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    for(auto it=v1.begin();v1.begin()!=v1.end();++it)
    {
        cout<<*it;
    }

    cout<<endl;

    for(auto it=v7.begin();v7.begin()!=v7.end();++it)
    {
        cout<<*it;
    }

    cout<<endl;

    return 0;
}