#include<string>
#include<iostream>
#include"SalesData.h"

int main()
{
    SalesData data1,data2,total;
    double price;

    std::cin>>data1.book_no>>data1.unit_sold>>price;
    data1.revenue=data1.unit_sold*price;

    std::cin>>data2.book_no>>data1.unit_sold>>price;
    data2.revenue=data2.unit_sold*price;

    if(data1.book_no==data2.book_no)
    {
        unsigned total.unit_sold=data1.unit_sold+data2.unit_sold;
        double total.revenue=data1.revenue+data2.revenue;
    }
}