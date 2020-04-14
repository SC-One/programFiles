#include<iostream>
#include<vector>
#include"compare.h"

using compare::max;

int main()
{
    std::vector<double> data {1.5, 4.6, 3.1, 1.1, 3.8, 2.1};
    std::cout<<max(data)<<std::endl<<compare::min(data)<<std::endl;
    return 0;
}

// or use following code:

//using namespace compare;

//int main()
//{
//    std::vector<double> data {1.5, 4.6, 3.1, 1.1, 3.8, 2.1};
//    std::cout<<max(data)<<std::endl<<min(data)<<std::endl;
//    return 0;
//}

