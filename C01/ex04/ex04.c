void ft_ultimate_div_mod(int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *a / *b;
<<<<<<< HEAD
    *b = swap % *b;   
=======
    *b = *a % *b;   
>>>>>>> f9bca36600f23744493d3448e92e42b2a041b408
}