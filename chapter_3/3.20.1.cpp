#include<iostream>
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

    for(decltype(vInt.size()) j=0;j+1<vInt.size();j+=2)
    {
        cout<<vInt[j]+vInt[j+1]<<" ";
    }

    if(vInt.size()%2!=0)
    {
        cout<<vInt[vInt.size()-1];
    }

    cout<<endl;
}