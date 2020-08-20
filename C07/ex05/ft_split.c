#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int is_whitespace(char c){
    if(c == ' ' || (c >= 9 && c <= 13))
        return 1;
    return 0;
}

int     ft_strlen(char *str){
    int i;
    
    i = 0;
    while(str[++i]);
    return i;
}



char *malloc_word(char *str, int start, int end){
	char *word;
	int i;

	i = 0;
	word = (char*)malloc(sizeof(char *) * (end - start + 1));
	while(start != end + 1){
		word[i] =  str[start];
		//printf("str: %c:", str[start]);	
		start++;
		i++;
	}
	//printf("\n");
	word[i++] = '\0';
	return word;
}

int count_words(char *str, char *charset){
	int count;
	int i;
	int j;
	
	j = 0;
	i = 0;
	if(str[i] == '\0')
		return 0;
	count = 1;
	while(str[i]){
		if(str[i] == charset[j]){
			while(str[i] && str[i] == charset[j] && charset[j]){
				i++;
				j++;
			}
			if(charset[j] == '\0'){
				count++;
				printf("str[%d]: %c, str[%d]: %c\n", i, str[i], j, str[j]);
			}
		//		if(malloc_word(str, i, j - ft_strlen(str) - 1))
			j = 0;
		}else
			i++;
	}
	return count;
}
int presence_of_charset(char *str, int start, char *charset){

	int i;
	int j;

	i = start;
	j = 0;
	while(str[i]){
		if(str[i] == charset[j]){
			while(str[i] == charset[j] && str[i] && charset[j]){
				i++;	
				j++;
			}
			if(charset[j] == '\0'){
				return i - j - 1;
			}
			j = 0;
		}
		i++;
	}
	return 0;
}

char **ft_split(char *str, char *charset){
	char **result;
	int i;
	int j;
	int remember;

	i = 0;
	remember = 0;
	j = 0;
	if (!(result = malloc(sizeof(char *) * count_words(str, charset) + 1)))
		return (void * )0;
	while(str[i] && presence_of_charset(str, i, charset) != 0){
		remember = i;
	 	i = presence_of_charset(str, i, charset);
		if(malloc_word(str, remember, i) != NULL)	
			result[j] = malloc_word(str, remember, i);
		j++;
		i = i + ft_strlen(charset) + 1;
	}
	result[j] = malloc_word(str, i, ft_strlen(str) - 1);
	j++;
	result[j] = NULL;
	return result;
}

int main(int ac, char *av[]){
	char **result;
	char *word;
	int i;

	i = 0;
	if(ac == 3){
		result = ft_split(av[1], av[2]);
		while(result[i] != NULL){
			printf("%s\n", result[i++]);
		}
	}
}
