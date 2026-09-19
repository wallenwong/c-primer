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
    SalesData total;
    double price=0;

    if(std::cin>>total.book_no>>total.unit_sold>>price)
    {
        total.revenue=total.unit_sold*price;
        
        SalesData data;

        while(std::cin>>data.book_no>>data.unit_sold>>price)
        {
            data.revenue=data.unit_sold*price;

            if(data.book_no==total.book_no)
            {
                total.unit_sold+=data.unit_sold;
                total.revenue+=data.revenue;
            }
            else
            {
                std::cout<<total.book_no<<" "
                        <<total.unit_sold<<" "
                        <<total.revenue<<" "
                        <<std::endl;

                total=data;
            }
        }
        std::cout<<total.book_no<<" "
                <<total.unit_sold<<" "
                <<total.revenue<<" "
                <<std::endl;
    }

    return 0;
}