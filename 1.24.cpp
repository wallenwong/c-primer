#include<iostream>
#include"Sales_item.h"
int main()
{
    Sales_item item1,item2;
    std::cout<<"请输入销售记录:"<<std::endl;
    int cnt=1;
    if (std::cin>>item1)
    {
        while (std::cin>>item2)
        {
            if (compareIsbn(item1,item2))
            {
                ++cnt;
            }
            else
            {
                std::cout<<item1.isbn()<<"共销售"<<cnt<<"本"<<std::endl;
                item1=item2;
                cnt=1;
            }
        }
        std::cout<<item1.isbn()<<"共销售"<<cnt<<"本"<<std::endl;
    }
    return 0;
}