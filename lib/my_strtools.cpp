/*
** EPITECH PROJECT, 2021
** BeforePool
** File description:
** my_strtools
*/

#include "../include/lib_made.hpp"

int my_strlen(std::string str)
{
    int i (0);

    for (i = 0; str[i] != '\0'; i++);
    return (i);    
}