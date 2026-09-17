#include<iostream>
#include"Sales_item.h"
int main()
{
    Sales_item total,trans;
    if(std::cin>>total)
    {
        while (std::cin>>trans)
        {
            if(compareIsbn(total,trans))
            {
                total+=trans;
            }
            else
            {
                std::cout<<"书籍信息为:"<<total<<std::endl;
                total=trans;
            }
        }
        std::cout<<total<<std::endl;
    }
    else
    {
        std::cerr<<"没有输入销售记录:"<<std::endl;
    }
}