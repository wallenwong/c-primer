#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,result;

    while(cin>>s)
    {
        result+=s;
    }

    cout<<"输出的结果没有空格："<<result<<endl;

    return 0;
}
