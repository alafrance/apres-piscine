#include <stdio.h>

int sizeInt(int nbr)
{
    int nb = nbr;
    int size = 1;
    while (nb >= 10)
    {
        nb = nb / 10;
        size++;
    }
    return size;
}

int tailleInt(int size)
{
    int i = 0;
    int taille = 1;
    while (i != size - 1)
    {
        taille = taille * 10;
        i++;
    }
    return taille;
}
void ft_putnbr(int nbr)
{
    int nb = 0;
    int i;
    int size = sizeInt(nbr);
//    nb = 0;
    i = tailleInt(size);
    printf("i : %d, size: %d\n", i, size);
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr = nbr * -1;
    }
    while (nbr > 10)
    {
        nb = nb + (nbr % 10) * i ;
        nbr = nbr / 10;
        if (i > 10)
            i = i / 10;
        else
            printf("Bonjour\n");
    }
    printf("nb = %d\n", nb);
}
