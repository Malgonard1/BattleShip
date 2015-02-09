/*
** place_ships.c for p in /Users/Malonga/Downloads/BattleShip/BattleShip.git/trunk
** 
** Made by MALONGA alan
** Login   <malong_a@etna-alternance.net>
** 
** Started on  Mon Feb  9 21:31:16 2015 MALONGA alan
** Last update Mon Feb  9 21:31:19 2015 MALONGA alan
*/


#include	<stdlib.h>
#include	"my.h"

static int battlefield[10][10] = {
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};

int		check_victory()
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (i < 10)
    {
      while (j < 10)
	{
	  if (battlefield[i][j] == 1)
	    return (0);
	  j++;
	}
      j = 0;
      i++;
    }
  my_putstr("Victoire ! Vous avez coulé tous les bateaux de l'ennemi !\n");
  return (1);
}

void		shot(char *str)
{
  int		i;
  int		j;

  if (str[0] >= 'A' && str[0] <= 'J')
    {
      j = str[0] - 65;
      i = my_getnbr(str + 1) - 1;
      if (i >= 0 && i < 10)
	{
	  if (battlefield[i][j] == 0)
	    {
	      battlefield[i][j] = 2;
	      my_putstr("Manqué !\n");
	    }
	  else if (battlefield[i][j] == 1)
	    {
	      battlefield[i][j] = 3;
	      my_putstr("Touché !\n");
	    }
	  else if (battlefield[i][j] == 3)
	    my_putstr("Vous avez déjà tiré à cet emplacement !\n");
	}
    }
  else
    my_putstr("Position invalide !\nUsage : de A1 à J10\n");
}

void		aff_tab()
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  my_putstr("\nPlan de bataile : \n____________\n");
  while (i < 10)
    {
      my_putchar('|');
      while (j < 10)
	{
	  if (battlefield[i][j] == 3)
	    my_putchar('T');
	  else if (battlefield[i][j] == 2)
	    my_putchar('X');
	  else
	    my_putchar(' ');
	  j++;
	}
      my_putstr("|\n");
      j = 0;
      i++;
    }
  my_putstr("------------\nNombre de coups : ");
}

int		verif_place(int j, int k, int l, int place)
{
  int		i;

  i = 0;
  if (l == 1)
    {
      if (k + place > 9)
	return (1);
      for (i = 0; i < place; i++)
	{
	  if (battlefield[j][k + i] != 0)
	    return (1);
	}
    }
  else
    {
      if (j + place > 9)
	return (1);
      for (i = 0; i < place; i++)
	{
	  if (battlefield[j + i][k] != 0)
	    return (1);
	}
    }
  return (0);
}

void		place_ships(int *ships, int i, int j)
{
  int		k;
  int		l;

  while (i < 5)
    {
      j = rand() % 10;
      k = rand() % 10;
      l = rand() % 2;
      if (verif_place(j, k, l, ships[i]) == 0)
	{
	  if (l == 1)
	    {
	      for (l = 0; l < ships[i]; l++)
		battlefield[j][k + l] = 1;
	    }
	  else
	    {
	      for (l = 0; l < ships[i]; l++)
		battlefield[j + l][k] = 1;
	    }
	}
      else
	continue ;
      i++;
    }
}
