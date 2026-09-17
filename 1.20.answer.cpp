//自己的答案没有识别到一组数据，意思是需要一直检测输入，直到条件判断为假时。
#include<iostream>
#include"Sales_item.h"
int main()
{
    Sales_item item;
    std::cout<<"请输入销售记录："<<std::endl;
    while(std::cin>>item){
        std::cout<<"ISBN、售出本数、销售额和平均售价为 "<<item<<std::endl;
    }
    return 0;
}