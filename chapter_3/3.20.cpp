#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int i;
    vector<int>vInt;

    while(cin>>i)
    {
        vInt.push_back(i);
    }

    if(vInt.size()%2!=0)
    {
        for(decltype(vInt.size()) j=0;j<vInt.size()/2;++j)
        {
            cout<<vInt[j]+vInt[vInt.size()-j-1]<<" ";
        }

        cout<<vInt[vInt.size()/2]<<endl;
    }
    else
    {
       for(decltype(vInt.size()) j=0;j<vInt.size()/2;++j)
        {
            cout<<vInt[j]+vInt[vInt.size()-j-1]<<" ";
        } 

        cout<<endl;
    }

    return 0;
}