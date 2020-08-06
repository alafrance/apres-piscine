#include <unistd.h>
int     ft_strlen(char *str){
    int i;
    
    i = 0;
    while(str[++i]);
    return i;
}
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int is_valid(char *base){
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

void ft_putnbr_base(int nb, char *base)
{
    long nbr;
    int base_l;

    base_l = ft_strlen(base);
    if (is_valid(base)){
        if (nb < 0) {
            ft_putchar('-');
            nb *= -1;
        }
        nbr = nb;
        if (nbr >= base_l){
            nbr = nbr / base_l;
            ft_putnbr_base(nbr, base);
        }
        nb = nb % base_l;
        ft_putchar(base[nb]);
    }
}
#include <stdio.h>

int main(int argc, char const *argv[])
{
    ft_putnbr_base(0, "0123456789abcdef");   
    return 0;
}
