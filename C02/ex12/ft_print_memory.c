#include <stdio.h>
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
             ft_putchar('a' + i - 10);
        else
            ft_putchar(i + 48);
    }
}

void *ft_print_memory(void *addr, unsigned int size)
{
    char *str = addr;
    int i = 1;
    while (str[i])
    {
        
        ft_putnbr_intBase((int) &str[i], 16);
        ft_putchar(' ');
        i += 2;
    }
    return addr;
}



#include <stdio.h>
#include <string.h>

int main()
{
    int size;
    size = strlen("Bonjour les aminches \n\t\nc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol.  .");
    ft_print_memory(&"Bonjour les aminches \n\t\nc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol.  .", size);
}