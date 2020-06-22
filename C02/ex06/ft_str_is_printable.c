int ft_str_is_printable(char *str)
{
    int i = 0;
    int bool = 1;
    while (str[i])
    {
        if (!(str[i] >= ' ' && str[i] <= '~'))
            bool = 0;
        i++;
    }
    return bool;
}