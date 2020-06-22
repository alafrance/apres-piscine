int ft_str_is_lowercase(char *str)
{
    int i = 0;
    int bool = 1;
    while (str[i])
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            bool = 0;
        i++;
    }
    return bool;
}