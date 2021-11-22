/*
** EPITECH PROJECT, 2021
** BeforePool
** File description:
** my_string_tools
*/

#include "../include/my_string/my_string.hpp"
#include <iostream>

//OPERATOR
MyString &MyString::operator+(MyString &aString) 
{
    this->m_str = this->stringCat(aString.m_str);
    return *this;
}

//CONSTRUCTOR
MyString::MyString(char *aString) {
    this->m_str = aString;
}

MyString::MyString(char const *aString) {
    this->m_str = const_cast<char *>(aString);
}

//PRIVATE
int MyString::stringCmp(char *aBase, char *aCompare)
{
    int i = 0;
    int cmpResult = 0;

    while (aBase && aCompare && aBase[i] && aCompare[i]) {
        cmpResult = aBase[i] - aCompare[i];
        if (cmpResult != 0)
            break;
        i++;
    }
    return ((cmpResult > 0) ? 1 : ((cmpResult  < 0) ? -1 : 0));
}

//PUBLIC
char *MyString::get(void)
{
    return this->m_str;
}

bool MyString::equal(MyString aString) 
{
    return this->stringCmp(this->m_str, aString.m_str) == 0;
}

bool MyString::equal(char *aString)
{
    return this->stringCmp(this->m_str, aString) == 0;
}

char *MyString::stringCat(char *aString)
{
    int i = 0;
    int j = 0;

    while (this->m_str && this->m_str[i])
        i++;
    while (aString[j])
        m_str[i++] = aString[j++];

    return this->m_str;
}

char *MyString::stringCat(MyString aString)
{
    return stringCat(aString.m_str);
}

int MyString::size(void) {

    int i = 0;

    while (m_str && m_str[i++]);
    return i == 0 ? 0 : i -1;
}

int main() 
{
    char test[80];
    char *lol;

    test[0] = 'N';
    test[1] = '\0';

    MyString toto (test);
    std::cout << test << std::endl;

    MyString tata ("tata");
    toto = toto + tata;
    
    std::cout << toto.get() << std::endl;
    return toto.size();
}