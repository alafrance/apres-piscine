/*
unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
    return size;
}
*/
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int main(){
    char dest[70] = "Je suis la source bonjour";
    char src[50] = ", et bah moi enchante, la fin !";
    //strlcat(dest, src, sizeof(src));
    
    printf("%ld\n", strlcat(dest, src, strlen(src)));
    printf("%s\n", dest);
    printf("%s\n", src);
    printf("%ld\n", strlen(dest));
    printf("%ld\n", strlen(src));
}