void ft_sort_int_tab(int *tab, int size)
{
    int i = 0, j = 0;
<<<<<<< HEAD
    while (j != size - 1)
    {
        while (i != size - j - 1)
=======
    while (j != size)
    {
        while (i != size)
>>>>>>> f9bca36600f23744493d3448e92e42b2a041b408
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
<<<<<<< HEAD
=======
}

#include <stdio.h>

int main()
{
    int size = 7;
    int tab[7] = {3, 4, 7, 1, 0, 8, 5};
    ft_sort_int_tab(tab, 7);
  //  printf("%d", tab[0]);
    printf("%d", tab[1]);
    printf("%d", tab[2]);
    printf("%d", tab[3]);
    printf("%d", tab[4]);
    printf("%d", tab[5]);
    printf("%d", tab[6]);
 //   printf("%d", tab[7]);
    
>>>>>>> f9bca36600f23744493d3448e92e42b2a041b408
}