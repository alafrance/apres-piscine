int ft_str_is_uppercase(char *str)
{
    int i = 0;
    int bool = 1;
    while (str[i])
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
            bool = 0;
        i++;
    }
    return bool;
}