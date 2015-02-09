/*
** my_put_nbr.c for p in /Users/Malonga/Downloads/BattleShip/BattleShip.git/trunk
** 
** Made by MALONGA alan
** Login   <malong_a@etna-alternance.net>
** 
** Started on  Mon Feb  9 21:30:27 2015 MALONGA alan
** Last update Mon Feb  9 21:30:30 2015 MALONGA alan
*/


#include	"my.h"

void		my_put_nbr(int n)
{
  char		*str;
  int		i;

  i = 0;
  if (n == -2147483648)
    {
      str = "-2147483648";
      while (i < 11)
	{
	  my_putchar(str[i]);
	  i++;
	}
      return ;
    }
  if (n < 0)
    {
      my_putchar('-');
      n *= - 1;
    }
  if (n / 10 != 0)
    my_put_nbr(n / 10);
  my_putchar((n % 10) + '0');
}
