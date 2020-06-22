#include <unistd.h>

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
<<<<<<< HEAD

=======
>>>>>>> f9bca36600f23744493d3448e92e42b2a041b408
}