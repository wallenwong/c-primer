#include<iostream>
#include"Sales_item.h"
int main()
{
    Sales_item currVal,val;
    if(std::cin>>currVal){
        while (std::cin>>val)
        {
            if (compareIsbn(currVal,val))
            {
                std::cout<<"相同ISBN的和为:"<<currVal+val<<std::endl;
            }
            else
            {
                std::cout<<"ISBN不同。"<<currVal<<std::endl;
                currVal=val;
            }
            
        }
        std::cout<<currVal<<std::endl;
    }
    return 0;
}