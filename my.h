/*
** my.h for battleship in /home/chicoi_r/piscine/c/battleship
** 
** Made by Romain Chicoisne
** Login   <chicoi_r@etna-alternance.net>
** 
** Started on  Sat Oct 25 09:43:04 2014 Romain Chicoisne
** Last update Sat Oct 25 18:05:51 2014 Romain Chicoisne
*/

#ifndef		MY_H_
# define	MY_H_

int		check_victory();
void		shot(char *str);
void		aff_tab();
int		verif_place(int j, int k, int l, int place);
void		place_ships(int *ships, int i, int j);

int		special_free(char *str);

int		my_strcmp(char *s1, char *s2);

char		*readline();

void		init_ships();

void		my_put_nbr(int n);

int		my_getnbr(char *str);

void		my_putchar(char c);
int		my_strlen(char *str);
void		my_putstr(char *str);

#endif		/* !MY_H_ */
