#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
        ft_putchar(str[i++]);
}

int ft_char_is_printable(char c)
{
    int bool = 1;
        if (!(c >= ' ' && c <= '~'))
            bool = 0;
    return bool;
}

void ft_putnbr_intBase(int i, int base)
{
    int nbr;
    if (i < 0)
    {
        ft_putchar('-');
        i *= -1;
    }
    nbr = i;
    if (base > 2)
    {
        if (nbr > base)
        {
            nbr = nbr / base;
            ft_putnbr_intBase(nbr, base);
        }
        i = i % base ;
        if (i >= 10)
             ft_putchar('A' + i - 10);
        else
            ft_putchar(i + 48);
    }
}

void ft_putstr_non_printable(char *str)
{
    int i = 0;
    int val_ascii = 0;
    while (str[i])
    {
        if (ft_char_is_printable(str[i]))
            ft_putchar(str[i]);
        else
        {
            ft_putchar('\\');
            val_ascii = str[i];
            if (val_ascii <= 15)
                ft_putchar('0');
            ft_putnbr_intBase(val_ascii, 16);
        }
        i++;  
    }
}