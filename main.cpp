#include<iostream>
#include"powerHeader.h"

int main()
{
    for(int i{-3};i<=3;i++)
        std::cout<<myPow(8.0,i)<<std::endl;
    return 0;
}

