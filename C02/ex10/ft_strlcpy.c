int ft_strlen(char *str)
{
    int i = 0;
    while (str[i++]);
    return i;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    while (i != size - 1 && i != ft_strlen(src))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return ft_strlen(src);
}