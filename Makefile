##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Stumper
##

SRC			=	src/1st_Cpp.cpp		\
				lib/my_strtools.cpp \

NAME		=	ExecMoiBg

CFLAGS		=	-I include/

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