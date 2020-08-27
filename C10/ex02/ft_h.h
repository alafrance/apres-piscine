#ifndef _FT_H
#define _FT_H
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <libgen.h>
#include <errno.h>
#include <stdlib.h>
int is_c_option(char *str);
void ft_putchar(char c){
	write(1, &c, 1);
}
int is_whitespace(char c){
    return (c == ' ' || (c >= 9 && c <= 13)) ? 1 : 0;
}
int ft_str_is_numeric(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return 0;
        i++;
    }
    return 1;
}
int ft_str_is_printable(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (!(str[i] >= ' ' && str[i] <= '~'))
            return 0;
        i++;
    }
    return 1;
}

int	ft_atoi(char *str)
{
	int i;
	int signe;
	int atoi;

	atoi = 0;
	signe = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\r' || str[i] == '\f')
		i++;
	while (!(str[i] >= 48 && str[i] <= 57))
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		atoi = (atoi * 10) + (str[i] - 48);
		i++;
	}
	return (atoi * signe);
}

   
void ft_putstr(char *str){
	int i;

    i = 0;
    while(str[i])
    	ft_putchar(str[i++]);
}
int ft_strlen(char *str){
	int i;

	i = 0;
	while(str[++i]);
	return i;
}
void ft_putnbr(int nb)
{
    long nbr;
    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    nbr = nb;
    if (nbr >= 10)
    {
        nbr = nbr / 10;
        ft_putnbr(nbr);
    }
    nb = nb % 10 + 48;
    write(1, &nb, 1);
}

int isnt_files(char **av, int ac){
	int i;

	i = 1;
	while(i != ac){
		if(av[i][0] != '-' && !is_c_option(av[i - 1]))
			return 0;
		i++;
	}
	return 1;	
}
int is_a_file(char **av, int index){
	return (av[index][0] != '-' && !is_c_option(av[index - 1]) ) ? 1 : 0;
}
#endif
