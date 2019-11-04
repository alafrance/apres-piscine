void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    while (i != size / 2)
    {
        int swap;
        swap = tab[i];
        tab[i] = tab[size - i];
        tab[size - i] = swap;
        i++;
    }
}