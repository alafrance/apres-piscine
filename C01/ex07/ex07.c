void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    while (i != size / 2)
    {
        int swap;
        swap = tab[i];
<<<<<<< HEAD
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = swap;
=======
        tab[i] = tab[size - i];
        tab[size - i] = swap;
>>>>>>> f9bca36600f23744493d3448e92e42b2a041b408
        i++;
    }
}