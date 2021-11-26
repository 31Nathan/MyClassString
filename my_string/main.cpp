#include "./../include/my_string.hpp"
#include <iostream>

int main() 
{
    char test[80];
    test[0] = 'P';
    test[1] = '\0';

    MyString toto ("athan");
    MyString tata (test);

    tata = tata.stringCat(toto);

    std::cout << tata.c_str() << std::endl;
    return 0;
}