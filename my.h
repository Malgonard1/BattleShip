/*
** my.h for p in /Users/Malonga/Downloads/BattleShip/BattleShip.git/trunk
** 
** Made by MALONGA alan
** Login   <malong_a@etna-alternance.net>
** 
** Started on  Mon Feb  9 21:29:34 2015 MALONGA alan
** Last update Mon Feb  9 21:29:36 2015 MALONGA alan
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
