#include <stdio.h>

int ft_char_is_uppercase(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

int ft_char_is_alpha_numeric(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return 1;
    return 0;
}

int ft_char_is_lowercase(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;
}

char *ft_strcapitalize(char *str)
{

    int i = 0;
    while (str[i])
    {
        if (ft_char_is_lowercase(str[i]))
            if ((ft_char_is_alpha_numeric(str[i - 1]) == 0) || i == 0)
                str[i++] -= 32;
        else
            i++;    
        while (ft_char_is_alpha_numeric(str[i]))
            {
                if (ft_char_is_uppercase(str[i]) && ft_char_is_alpha_numeric(str[i - 1]) == 1)
                    str[i] += 32;
                i++;
            }
        i++;
    }
    return str;
}

int main(int ac, char *av[])
{
    printf("%s", ft_strcapitalize(av[1]));
    return 0;  
}