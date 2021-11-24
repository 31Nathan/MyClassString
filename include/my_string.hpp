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

        char *c_str(void);
        char *data(void);

        bool equal(MyString aString);
        bool equal(char *aString);

        char *stringCat(MyString aString);      
        char *stringCat(char *aString);

        char *stringCopy(MyString aDest, int len, int pos);
        char *stringCopy(char *aDest, int len, int pos);

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