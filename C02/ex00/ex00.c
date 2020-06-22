char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i])
        dest[i] = src[i++];
    while (dest[i])
        dest[i++] = '\0';
    return (dest);     
}