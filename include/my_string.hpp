/*
** EPITECH PROJECT, 2021
** BeforePool
** File description:
** my_string
*/

#ifndef MY_STRING_HPP_
#define MY_STRING_HPP_

class MyString {
    //Accessible pour tout le monde
    public:
        //OPERATEUR
        MyString &operator+(MyString &aString);

        //CONSTRUCTEUR
        MyString(char *aString);
        MyString(const char *aString="");

        int size(void);
        char *value(void);

        bool equal(MyString aString);
        bool equal(char *aString);

        char *stringCat(MyString aString);      
        char *stringCat(char *aString);

        void erase(void);

        char *substr(int index);

    //Accessible que si tu travailles dans la classe
    private:
        char *m_str;

        int stringCmp(char *aBase, char *aCompare);

    //Accessible que si tu travailles dans la classe ou dans une classe héritante
    protected:
};

#endif /* !MY_STRING_HPP_ */