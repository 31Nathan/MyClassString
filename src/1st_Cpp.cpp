/*
** EPITECH PROJECT, 2021
** BeforePool
** File description:
** 1st_Cpp
*/

#include "../include/lib_made.hpp"

int power(int x)
{
    return (x*x);
}

int main()
{   
    int x (10);
    int y(0);

    std::cout << x << " au carré ?" << std::endl;

    std::cin >> y;

    if (y == power(x))
        std::cout << "BIEN JOUÉ !" << std::endl;
    
    std::cout << my_strlen("Salut") << std::endl;
    return (0);
}