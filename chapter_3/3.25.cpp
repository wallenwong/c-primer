#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>grade(11,0);
    int score;

    while(cin>>score)
    {
        if(score<=100)
        {
            ++*(grade.begin()+score/10);
        }
    }

    for(auto a:grade)
    {
        cout<<a<<" ";
    }

    cout<<endl;

    return 0;
}