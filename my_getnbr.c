/*
** my_getnbr.c for p in /Users/Malonga/Downloads/BattleShip/BattleShip.git/trunk
** 
** Made by MALONGA alan
** Login   <malong_a@etna-alternance.net>
** 
** Started on  Mon Feb  9 21:30:02 2015 MALONGA alan
** Last update Mon Feb  9 21:30:05 2015 MALONGA alan
*/


int	my_getnbr(char *str)
{
  int	i;
  int	j;
  int	nb;

  i = 0;
  j = 0;
  nb = 0;
  while (str[i] < '0' || str[i] > '9')
    {
      if (str[i] != '-' && str[i] != '+')
	return (0);
      else if (str[i] == '-')
	j++;
      i++;
    }
  while (str[i] >= '0' && str[i] <= '9')
    {
      nb = nb * 10 + (str[i] - '0');
      i++;
    }
  if (j % 2 != 0)
    nb *= -1;
  return (nb);
}
