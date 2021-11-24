##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Stumper
##

SRC			=	my_string/my_string_tools.cpp	\

NAME		=	MyStringExec

CFLAGS		=	-I include/my_string/

LDFLAGS		=	

OBJ			=	$(SRC:.cpp=.o)

++			= g++

all:	$(NAME)

$(NAME):	$(OBJ)
	$(++) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all