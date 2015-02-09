/*
** main.c for p in /Users/Malonga/Downloads/BattleShip/BattleShip.git/trunk
** 
** Made by MALONGA alan
** Login   <malong_a@etna-alternance.net>
** 
** Started on  Mon Feb  9 21:29:10 2015 MALONGA alan
** Last update Mon Feb  9 21:29:13 2015 MALONGA alan
*/


#include	<stdio.h>
#include	<stdlib.h>
#include	<time.h>
#include	"my.h"

int		special_free(char *str)
{
  free(str);
  return (0);
}

int		main()
{
  char		*str;
  time_t	t;
  int		count;

  count = 0;
  srand((unsigned) time(&t));
  init_ships();
  aff_tab();
  my_put_nbr(count);
  my_putstr("\nEntrez une position : ");
  while ((str = readline()) != NULL)
    {
      if (my_strcmp(str, "quit") == 0)
	return (special_free(str));
      ((str[2] && str[2] != '0')) ?
	my_putstr("Position invalide !\nUsage : de A1 à J10\n") : shot(str);
      if ((check_victory()) == 1)
	return (special_free(str));
      aff_tab();
      free(str);
      count++;
      my_put_nbr(count);
      my_putstr("\nEntrez une position : ");
    }
  return (0);
}
