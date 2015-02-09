/*
** my_getnbr.c for get number in /home/chicoi_r/piscine/c/jour03/my_getnbr
** 
** Made by Romain Chicoisne
** Login   <chicoi_r@etna-alternance.net>
** 
** Started on  Wed Oct 22 10:26:11 2014 Romain Chicoisne
** Last update Sat Oct 25 15:26:28 2014 Romain Chicoisne
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
