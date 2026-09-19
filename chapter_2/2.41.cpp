#include<iostream>
#include<string>
struct Sales_data
{
    std::string isbn;
    double price;
    unsigned sales_num;
}data1,data2;
int main()
{
    std::cin>>data1.isbn>>data1.price>>data1.sales_num;
    std::cout<<data1.isbn<<data1.price<<data1.sales_num<<std::endl;
    return 0;
}