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
        //OPERATOR
        MyString &operator+(MyString &aString);

        //CONSTRUCTOR
        MyString(char *aString);
        MyString(const char *aString="");

        //DESTRUCTOR
        ~MyString(void);

        //FUNCTIONS

        size_t size(void);
        size_t length(void);

        char *c_str(void);
        char *data(void);

        ///
        // @brief Compare the class str and the param aString 
        // 
        // @param aString comparator 
        // @return true if string are equals
        // @return false if not
        ///
        bool equal(MyString aString);      
        ///
        // @brief Concatenate the class str and the param aString
        // 
        // @param aString to be concatenate
        // @return MyString + aString concatenate
        ///
        MyString stringCat(MyString aString);      

        MyString stringCopy(MyString aDest, int len, int pos = 0);

        MyString& erase(size_t pos = 0, size_t len = npos);


        //VARIABLES
        static const size_t npos = -1;

    //Accessible que si tu travailles dans la classe
    private:
        char *m_str;
        int stringCmp(MyString aBase, MyString aCompare);

    //Accessible que si tu travailles dans la classe ou dans une classe héritante
    protected:
};

#endif /* !MY_STRING_HPP_ */