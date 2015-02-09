/*
** functions.c for battleship in /home/chicoi_r/piscine/c/battleship
** 
** Made by Romain Chicoisne
** Login   <chicoi_r@etna-alternance.net>
** 
** Started on  Sat Oct 25 09:45:07 2014 Romain Chicoisne
** Last update Sat Oct 25 10:50:53 2014 Romain Chicoisne
*/

#include	<unistd.h>
#include	"my.h"

void		my_putchar(char c)
{
  write(STDOUT_FILENO, &c, 1);
}

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void		my_putstr(char *str)
{
  write(STDOUT_FILENO, str, my_strlen(str));
}
