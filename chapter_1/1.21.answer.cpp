#include<iostream>
#include"Sales_item.h"
int main()
{
    std::cout<<"请输入两个相同的ISBN:"<<std::endl;
    Sales_item item1,item2;
    std::cin>>item1>>item2;
    if(compareIsbn(item1,item2)){
        std::cout<<"两个相同的ISBN的和是:"<<item1+item2<<std::endl;
    }
    else{
        std::cout<<"输入的ISBN不相同。"<<std::endl;
    }
    return 0;
}