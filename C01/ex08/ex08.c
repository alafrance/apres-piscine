void ft_sort_int_tab(int *tab, int size)
{
    int i = 0, j = 0;
    while (j != size - 1)
    {
        while (i != size - j - 1)
        {
            if (tab[i + 1] < tab[i])
            {
                int swap;
                swap = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = swap;
            }
            i++;
        }
        i = 0;
        j++;
    }
}