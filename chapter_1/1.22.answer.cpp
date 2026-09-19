#include<iostream>
#include"Sales_item.h"
int main()
{
    Sales_item total,trans;
    if(std::cin>>total){
        while (std::cin>>trans)
        {
            if (compareIsbn(total,trans))
            {
                total=total+trans;
            }
            else
            {
                std::cout<<"ISBN不同。"<<std::endl;
                return -1;
            }
            std::cout<<"销售记录:ISBN、册数、总价、单价: "<<total<<std::endl;
        }
           
    }
    else{
        std::cout<<"没有数据"<<std::endl;
        return -1;
    }
    return 0;
}