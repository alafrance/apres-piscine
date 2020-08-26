#ifndef _FT_H
#define _FT_H
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <libgen.h>
#include <errno.h>

void ft_putchar(char c){
	write(1, &c, 1);
}
int is_whitespace(char c){
    return (c == ' ' || (c >= 9 && c <= 13)) ? 1 : 0;
}

int ft_atoi(char *str){
    int nb;
    int sign;
    int i;

    i = 1;
    sign = 1;
    while(is_whitespace(str[++i]));
    while(str[i] == '-' || str[i] == '+'){
        if(str[i++] == '-')
            sign *= -1;
    }
    while(str[i] >= '0' && str[i] <= '9')
        nb = (nb * 10) + (str[i++] - 48);
    return nb * sign;
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
#endif
