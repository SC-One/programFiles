#include<iostream>
#define DEFINE_FUNC_PREPROCESSOR(NAME,COUNT,VALUE)\
    void NAME##COUNT(){std::cout<<#VALUE;}

DEFINE_FUNC_PREPROCESSOR(func,123,salam)


int main()
{
    func123();
    std::cout<<std::endl;
    return 0;
}


// preprocessor define ...
// #VALUE , in that # just is stringification operator.
// ##COUNT , in that ## just is concatenate operator like + doing for variables.
