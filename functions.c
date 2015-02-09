/*
** functions.c for p in /Users/Malonga/Downloads/BattleShip/BattleShip.git/trunk
** 
** Made by MALONGA alan
** Login   <malong_a@etna-alternance.net>
** 
** Started on  Mon Feb  9 21:28:20 2015 MALONGA alan
** Last update Mon Feb  9 21:28:26 2015 MALONGA alan
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
