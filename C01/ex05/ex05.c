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
<<<<<<< HEAD
}
=======
}
>>>>>>> f9bca36600f23744493d3448e92e42b2a041b408
