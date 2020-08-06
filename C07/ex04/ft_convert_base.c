#include <stdlib.h>
#include <stdio.h>



int is_base_valid(char *base){
	return 1;
}


char *convert_base_to_10(char *nbr, char *base_from){
	return "hola";
}
char *convert_10_to_base(char *nbr, char *base_to){
	printf("%s", nbr);
	return "coucou";
}

char 	*ft_convert_base(char *nbr, char *base_from, char *base_to){
	if(!(is_base_valid(base_from) && is_base_valid(base_to)))
		return NULL;
	nbr = convert_base_to_10(nbr, base_from);
	nbr = convert_10_to_base(nbr, base_to);	
	return nbr;
}


int main(){
	char nbr[11] = "0123456789";
	char *end;
	char base_from[11] = "0123456789";
	char base_to[11] = "0123456789";
	end = ft_convert_base(nbr, base_from, base_to);
	printf("%s\n", end);
}
