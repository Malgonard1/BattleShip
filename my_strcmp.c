/*
** my_strcmp.c for  in /home/chicoi_r/piscine/c/jour04/my_strcmp
** 
** Made by Romain Chicoisne
** Login   <chicoi_r@etna-alternance.net>
** 
** Started on  Thu Oct 23 10:19:19 2014 Romain Chicoisne
** Last update Sat Oct 25 17:36:52 2014 Romain Chicoisne
*/

#include	"my.h"

int		my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i])
    {
      if (s1[i] < s2[i])
	return (-1);
      else if (s1[i] > s2[i])
	return (1);
      i++;
    }
  if (s1[i] < s2[i])
    return (-1);
  else if (s1[i] > s2[i])
    return (1);
  return (0);
}
