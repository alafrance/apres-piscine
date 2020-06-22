int ft_str_is_numeric(char *str)
{
    int i = 0;
    int bool = 1;
    while (str[i])
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            bool = 0;
        i++;
    }
    return bool;
}