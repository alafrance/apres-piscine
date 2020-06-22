char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    while (i != n)
        dest[i] = src[i++];
    while (dest[i])
        dest[i++] = '\0';
}