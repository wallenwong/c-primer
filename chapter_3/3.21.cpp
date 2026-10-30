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

    cout<<v1.size()<<endl;
    for(auto s1:v1)//不是迭代器，是范围for循环。
    {
        cout<<s1;
    }

    cout<<endl;

    cout<<v7.size()<<endl;
    for(auto s7:v7)
    {
        cout<<s7;
    }

    cout<<endl;

    return 0;
}