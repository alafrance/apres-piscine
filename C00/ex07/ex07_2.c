<<<<<<< HEAD
#include <stdio.h>
=======
#include <unistd.h>
>>>>>>> f9bca36600f23744493d3448e92e42b2a041b408

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

<<<<<<< HEAD
int tailleInt(int size)
=======
int taille_10_Int(int size)
>>>>>>> f9bca36600f23744493d3448e92e42b2a041b408
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
<<<<<<< HEAD
void ft_putnbr(int nbr)
{
    int nb = 0;
    int i;
    int size = sizeInt(nbr);
//    nb = 0;
    i = tailleInt(size);
    printf("i : %d, size: %d\n", i, size);
=======

int reverse_number(int nbr, int taille)
{
    int nb = 0;
    while (nbr > 10)
    {
        nb = nb + (nbr % 10) * taille ;
        nbr = nbr / 10;
        if (taille >= 10)
            taille = taille / 10;
    }
    nb = nb + (nbr % 10);
    return nb;
}
void ft_putnbr(int nbr)
{
    int nb;
    int size;
    char i;
>>>>>>> f9bca36600f23744493d3448e92e42b2a041b408
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr = nbr * -1;
    }
<<<<<<< HEAD
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
=======
    size = sizeInt(nbr);
    nb = reverse_number(nbr, taille_10_Int(size));
    while (nb > 10)
    {
        i = nb % 10 + 48;
        write(1, &i, 1);
        nb = nb / 10;
    }
    i = nb % 10 + 48;
    write(1, &i, 1);
}
>>>>>>> f9bca36600f23744493d3448e92e42b2a041b408
