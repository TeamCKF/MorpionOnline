##
## Makefile for Morpion in /home/gomel_f/Documents/MorpionOnline
## 
## Made by Frédéric GOMEL
## Login   <gomel_f@epitech.net>
## 
## Started on  Fri Jun  3 00:59:06 2016 Frédéric GOMEL
## Last update Sat Jun  4 03:41:27 2016 Mineshot03
##

SRC	=	src/client/main.c

SRC2	=	src/serveur/main.c

OBJ	=	$(SRC:.c=.o)

OBJ2	=	$(SRC2:.c=.o)

NAME	=	client

NAME2	=	serveur

CC	=	gcc
RM	=	rm -f
#CFLAGS	+=	-W -Wextra -Wall -Werror
CPPFLAGS	+= -I./include

all:		$(NAME) $(NAME2) clean

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) -lncurses

$(NAME2):	$(OBJ2)
		$(CC) -o $(NAME2) $(OBJ2)

clean:		
		$(RM) $(OBJ) $(OBJ2)

fclean:		clean
		$(RM) $(NAME) $(NAME2)

re:		fclean all

.PHONY:		all clean fclean re
