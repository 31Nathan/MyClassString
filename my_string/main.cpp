#include "./../include/my_string.hpp"
#include <iostream>

int main() 
{
    char *lol;
    char test[80];

    MyString toto ("Nathan");
    MyString tata (test);
    std::cout << toto.c_str() << std::endl;

    lol = toto.stringCopy(test, 2, 3);
    
    std::cout << lol << std::endl;
    return toto.size();
}