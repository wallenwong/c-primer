#include<iostream>
#include<cstddef>

int main()
{
    int i[10]{};
    for(size_t j=0;j<10;j++)
    {
        i[j]=j;

        cout<<i[j]<<' ';
    }

}