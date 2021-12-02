#include "./../include/my_string.hpp"
#include <iostream>

int main() 
{
    char test[80];
    test[0] = 'N';
    test[1] = '\0';
    char test2[30] = {'T', 'h', 'i', 's', ' ', 'i', 's', ' ', 's', 'e', 'n', 't', 'e', 'n', 'c', 'e', '\0'};
    char test3[30] = {'b', 'e', 'a', 'u'};

    MyString toto (test2);

    toto.erase(4);
    std::cout << toto.c_str() << std::endl;
    return 0;
}