#include <stdio.h>

// Seg fault a cause de l'exo07 et ex08
int ft_char_is_uppercase(char c)
{
    int bool = 0;
    if (c >= 'A' && c <= 'Z')
        bool = 1;
    return bool;
}

int ft_char_is_lowercase(char c)
{
    int bool = 0;
    if (c >= 'a' && c <= 'z')
        bool = 1;
    return bool;
}

char *ft_strcapitalize(char *str)
{

    int i = 0;
    if (ft_char_is_lowercase(str[0]))
        {
            str[0] = str[0] - 32;
            printf("test\n");      
        }
/*
    while (str[i])
    {
        if (str[i] == ' ' && (str[i + 1] > 'a' && str[i + 1] < 'z')
        {
            str[i + 1] = str[i + 1] - 32;
            i++;
            i++;
            while (str[i] || str[i] != ' ')
            {
                if (str[i] > 'A' 
                i++;
            }
        } 
        i++; // régler incrém
    }
*/
    return str;
}


int main()
{
    printf("%s", ft_strcapitalize("nonjour"));
}