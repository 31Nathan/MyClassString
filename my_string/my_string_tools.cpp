/*
** EPITECH PROJECT, 2021
** BeforePool
** File description:
** my_string_tools
*/

#include "../include/my_string.hpp"

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
char *MyString::c_str(void)
{
    return this->m_str;
}

char *MyString::data(void)
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

void MyString::erase(void) {

    this->m_str = const_cast<char *>("");
}

char *MyString::substr(int index) {
    
    if (index < 0)
        return this->m_str;
    else if (index > this->size())
        return const_cast<char *>("");
    else
        return &this->m_str[index];
}

char *MyString::stringCopy(char *aDest, int len, int pos)
{   
    int i = pos;
    int j = 0;

    for (; i < pos + len; i++) {
        aDest[j] = this->m_str[i];
        j++;
    }    
    aDest[j] = '\0';
    return aDest;
}

char *MyString::stringCopy(MyString aDest, int len, int pos)
{
    return stringCopy(aDest.c_str(), len, pos);
}