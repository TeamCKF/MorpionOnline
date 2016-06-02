##
## Makefile for Morpion in /home/gomel_f/Documents/MorpionOnline
## 
## Made by Frédéric GOMEL
## Login   <gomel_f@epitech.net>
## 
## Started on  Fri Jun  3 00:59:06 2016 Frédéric GOMEL
## Last update Fri Jun  3 01:02:08 2016 Frédéric GOMEL
##

NAME	=	morpion

CC	=	gcc

RM	=	rm -f

SRC	=	

OBJ	=	$(SRC:.c=.o)

all:		$(NAME) clean

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean:		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(OBJ)

re:		fclean all

.PHONY:		all clean fclean re
