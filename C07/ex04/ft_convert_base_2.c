#include <stdlib.h>
#include <stdio.h>
int is_whitespace(char c){
    if(c == ' ' || (c >= 9 && c <= 13))
        return 1;
    return 0;
}

int     ft_strlen(char *str){
    int i;
    
    i = 0;
    while(str[++i]);
    return i;
}

int size(int a){
	int i = 10;
    int count = 1;
    while (i <= a)
    {
    	i *= 10;
        count++;
    }
    return count;
}

int ft_iterative_power(int nb, int power){
    int i;
    int result;

    result = nb;
    i = 0;
    if(power < 0)
        return 0;
    else if(power == 0)
        return 1;
    while(i != power - 1){
        result *= nb;
        i++;
    }
    return result;
}

int is_base_valid(char *base){
	int i;
    int j;
    char c;

    j = 0;
    i = 0;
    if(ft_strlen(base) == 0 || ft_strlen(base) == 1 || is_whitespace(base[i]))
        return 0;
    while(base[i]){
        if(base[i] == '+' || base[i] == '-')
            return 0;
        i++;
    }
    i = 0;
	while(base[i]){
        c = base[i];
        j = i + 1;
        while(base[j]){
			if(c == base[j])
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}

int size_malloc_base_10_to_b(int nbr, int base){
	int count;
	count = 0;
	while(nbr != 0){
		nbr /= base;
		count++;
	}
	return count;
}
char *ft_reverse_char(char *str){
	int i;
	int j;
	char swp;

	i = 0;
	j = ft_strlen(str) - 1;
	while(i != ft_strlen(str) / 2){
		swp = str[i];
		str[i] = str[j];
		str[j] = swp;
		i++;
		j--;
	}
	return str;
}
int ft_atoi(char *str){
    int nb;
    int sign;
    int i;

    i = 0;
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
