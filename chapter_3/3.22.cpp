#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<string>text{"hello","world","","1234"};

    for(auto it=text.begin();it!=text.end()&&!it->empty();++it)
    {
        for(auto &c:*it)
        {
            c=toupper(c);
        }

        cout<<*it<<" ";
    }

    cout<<endl;

    return 0;
}