int ft_str_is_uppercase(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
            return 0;
        i++;
    }
    return 1;
}
/*
#include <stdio.h>
int main() {
    printf("%d",ft_str_is_uppercase("AEZA"));
    return 0;
}
*/