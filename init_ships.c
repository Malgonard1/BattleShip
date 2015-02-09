/*
** init_ships.c for p in /Users/Malonga/Downloads/BattleShip/BattleShip.git/trunk
** 
** Made by MALONGA alan
** Login   <malong_a@etna-alternance.net>
** 
** Started on  Mon Feb  9 21:28:47 2015 MALONGA alan
** Last update Mon Feb  9 21:28:50 2015 MALONGA alan
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
