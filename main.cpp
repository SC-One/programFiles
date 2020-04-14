#include<iostream>
#include"Constants.h"

using  constants::pi;   // single using declaration

int main()
{
    std::cout<<pi<<std::endl<<constants::e<<std::endl \
            <<constants::sqrt2<<std::endl;
    return 0;
}

