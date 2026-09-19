#include<iostream>
#include<string>
struct SalesData
{
    std::string book_no;
    unsigned unit_sold;
    double revenue;
};
int main()
{
    SalesData data1,data2;
    double price;
    
    std::cin>>data1.book_no>>data1.unit_sold>>price;
    data1.revenue=data1.unit_sold*price;

    std::cin>>data2.book_no>>data2.unit_sold>>price;
    data2.revenue=data2.unit_sold*price;

    if(data1.book_no==data2.book_no)
    {
        unsigned total_cnt=data1.unit_sold+data2.unit_sold;
        double total_rev=data1.revenue+data2.revenue;

        std::cout<<data1.book_no<<" "<<total_cnt<<" "<<total_rev<<" ";
        
        if(total_cnt!=0)
        {
            double unit_price=total_rev/total_cnt;
            std::cout<<unit_price<<std::endl;
        }
    }else
    {
        std::cerr<<"IBSN must be same"<<std::endl;
        return -1;
    }
    return 0;
}