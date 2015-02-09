/*
** init_ships.c for battleship in /home/chicoi_r/piscine/c/battleship
** 
** Made by Romain Chicoisne
** Login   <chicoi_r@etna-alternance.net>
** 
** Started on  Sat Oct 25 12:03:47 2014 Romain Chicoisne
** Last update Mon Feb  9 21:10:31 2015 MALONGA alan
*/

#include	"my.h"

void		init_ships()
{
  int		i;
  int		j;
  int		ships[5];

  i = 0;
  j = 0;
  ships[0] = 5;
  ships[1] = 4;
  ships[2] = 3;
  ships[3] = 3;
  ships[4] = 2;
  place_ships(ships, i, j);
}
