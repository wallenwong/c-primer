//任意输入两个数，打印出这两个数之间的所有整数
#include<iostream>
int main(){
    int a,b;
    std::cin>>a>>b;
    if(a>b){
        for(;b<=a;b++){
            std::cout<<b<<" ";
        }
        std::cout<<std::endl;
    }
    else{
        for(;a<=b;++a){
            std::cout<<a<<" ";
        }
        std::cout<<std::endl;
    }
}