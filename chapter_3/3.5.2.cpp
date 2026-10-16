#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,result;

    while(cin>>s)
    {
        if(!result.empty())
        {
            result+=" ";
        }

        result+=s;
    }

    cout<<"输出的结果有空格："<<result<<endl;

    return 0;
}