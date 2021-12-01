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
    *this = this->stringCat(aString.m_str);
    return *this;
}

//CONSTRUCTOR
MyString::MyString(char *aString) {
    this->m_str = aString;
}

MyString::MyString(char const *aString) {
    this->m_str = const_cast<char *>(aString);
}

//DESTRUCTOR
MyString::~MyString(void) {
    
}

//PRIVATE
int MyString::stringCmp(MyString aBase, MyString aCompare)
{
    int i = 0;
    int cmpResult = 0;

    while (aBase.m_str && aCompare.m_str && aBase.m_str[i] && aCompare.m_str[i]) {
        cmpResult = aBase.m_str[i] - aCompare.m_str[i];
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

MyString MyString::stringCat(MyString aString)
{
    int i = 0;
    int j = 0;

    while (this->m_str && this->m_str[i])
        i++;
    while (aString.m_str[j])
        this->m_str[i++] = aString.m_str[j++];
    
    aString.m_str[i] = '\0'; 
    return aString;
}

int MyString::size(void) {

    int i = 0;

    while (m_str && m_str[i++]);
    return i == 0 ? 0 : i -1;
}

void MyString::erase(void) {

    this->m_str = const_cast<char *>("");
}

MyString MyString::stringCopy(MyString aDest, int len, int pos)
{
    int i = pos;
    int j = 0;

    while (i < (pos + len))
        aDest.m_str[j++] = this->m_str[i++];

    aDest.m_str[j] = '\0';
    return aDest;
}