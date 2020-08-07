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
int is_valid(char *base){
    int i;
    int j;
    char c;

    j = 0;
    i = 0;
    if(ft_strlen(base) == 0 || ft_strlen(base) == 1)
        return 0;
    while(base[i]){
        if(base[i] == '+' || base[i] == '-' || is_whitespace(base[i]))
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
int is_present(char c, char *base){
    int i;
    i = 0;
    while(base[i]){
        if(c == base[i])
            return 1;
        i++;
    }
    return 0;
}


int ft_atoi_base(char *str, char *base){
    int i = 0;
    int sign = 1;
    int atoi = 0;
    int base_l;

    if(!is_valid(base))
        return 0;
    base_l = ft_strlen(base);
    while(is_whitespace(str[++i]));
    while(str[i] == '-' || str[i] == '+'){
        if(str[i++] == '-')
            sign *= -1;
    }
    while (is_present(str[i], base)){
        if (str[i] >= 'A' && 'F' >= str[i])
			atoi = (atoi * base_l) + (str[i] - 'A' + 10);
		else if (str[i] >= 'a' && 'f' >= str[i])
			atoi = (atoi * base_l) + (str[i] - 'a' + 10);
		else
			atoi = (atoi * base_l) + (str[i] - '0');
        i++;
    }
    return atoi * sign;
}

/*
#include <stdlib.h>
#include <stdio.h>
int main()
{
    printf("%d", ft_atoi_base("    \r   \t   +123456789abcdef", "0123456789"));
    return 0;
}
*/
