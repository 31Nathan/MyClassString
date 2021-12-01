#include "./../include/my_string.hpp"
#include <iostream>

int main() 
{
    char test[80];
    test[0] = 'N';
    test[1] = '\0';
    char test2[10] = {'a', 't', 'h', 'a', 'n', '\0'};
    char test3[20] = {'b', 'e', 'a', 'u'};

    MyString toto (test2);
    MyString tata (test);

    toto.stringCat(test3);

    std::cout << test3 << std::endl;
    return 0;
}