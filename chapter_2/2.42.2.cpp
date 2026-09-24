#include<string>
#include<iostream>
#include"SalesData.h"

int main()
{
    SalesData data1,data2;
    double price=0;

    std::cin>>data1.book_no
            >>data1.unit_sold
            >>price;
    data1.revenue=data1.unit_sold*price;

    std::cin>>data2.book_no
            >>data2.unit_sold
            >>price;
    data2.revenue=data2.unit_sold*price;

    if(data1.book_no==data2.book_no)
    {
        unsigned total_sold=data1.unit_sold+data2.unit_sold;//可以使用total，但是没有必要。
        double total_rev=data1.revenue+data2.revenue;
        double average=total_rev/total_sold;
        std::cout<<data1.book_no<<" "
                <<total_sold<<" "
                <<total_rev<<" "
                <<average<<" ";
    }
    else
    {
        std::cout<<"The ISBN must be the same."
                <<std::endl;
    }
}