/*
** my_put_nbr.c for battleship in /home/chicoi_r/piscine/c/jour01/my_put_nbr
** 
** Made by Romain Chicoisne
** Login   <chicoi_r@etna-alternance.net>
** 
** Started on  Mon Oct 20 15:48:35 2014 Romain Chicoisne
** Last update Sat Oct 25 14:57:06 2014 Romain Chicoisne
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
