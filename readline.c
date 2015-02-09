/*
** readline.c for battleship in /home/chicoi_r/piscine/c/battleship
** 
** Made by Romain Chicoisne
** Login   <chicoi_r@etna-alternance.net>
** 
** Started on  Sat Oct 25 09:37:26 2014 Romain Chicoisne
** Last update Sat Oct 25 10:31:41 2014 Romain Chicoisne
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"my.h"

char		*readline()
{
  ssize_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
