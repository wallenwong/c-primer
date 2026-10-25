#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<int>v2(10);

    cout<<"元素中的个数是："<<v2.size()<<endl;

    for(auto i:v2)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    return 0;
}