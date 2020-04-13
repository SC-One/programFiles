#include<iostream>
#define PI 3.14159265   // it was usefull in C-style    but in C++ is better ways
inline const double pi{3.14159265};    // C++ style , better way , always define it like this >> inline const
//Caution: or you can use extern const double pi from another headers


int main()
{
    std::cout<<pi<<std::endl<<PI;
    std::cout<<std::endl;
    return 0;
}

