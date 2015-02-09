##
## Makefile for  in /home/chicoi_r/piscine/c/battleship
## 
## Made by Romain Chicoisne
## Login   <chicoi_r@etna-alternance.net>
## 
## Started on  Sat Oct 25 09:47:05 2014 Romain Chicoisne
## Last update Mon Feb  9 21:20:18 2015 MALONGA alan
##

CC		= gcc

RM		= rm -f

NAME		= battleship

SRCS		= functions.c	\
		  readline.c	\
		  init_ships.c	\
		  place_ships.c	\
		  my_put_nbr.c	\
		  my_getnbr.c	\
		  my_strcmp.c	\
		  main.c

OBJS		= $(SRCS:.c=.o)

CFLAGS		+= -W -Wall -Wextra



all		: $(NAME)

$(NAME)		: $(OBJS)
		  $(CC) $(OBJS) -o $(NAME)

clean		:
		  $(RM) $(NAME)

fclean		: clean
		  $(RM) $(OBJS)

re		: fclean all

.PHONY		: all clean fclean re