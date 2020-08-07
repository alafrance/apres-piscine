#include "ft_convert_base_2.c"
int convert_10_to_base_2(int nbr, int base){
	int remainder;
	int nb;
	int i;

	i = 0;
	nb = 0;
	remainder = 0;
	while(nbr != 0){
		remainder = nbr % base;
		nb = remainder * ft_iterative_power(10, i) + nb;
		nbr /= base;
		i++;
	}
	return nb;
}
int convert_base_to_10_2(int nbr, int base){
	int i;
	int nb;
	int remainder;

	i = 0;
	remainder = nbr;
	nb = 0;
	while(nbr != 0){
		remainder = nbr;
		while(remainder >= 10){
			remainder %= 10;
		}
		printf("%d\n", remainder);
		nb += remainder * ft_iterative_power(base, i);
		nbr /= 10;
		i++;
	}
	printf("%d", nb);
	return nb;
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
		return ((void *) 0) ;
	nbr = convert_base_to_10(nbr, base_from);
	nbr = convert_10_to_base(nbr, base_to);	
	return nbr;
}


int main(int ac, char *av[]){
	char nbr[11] = "0123456789";
	char *end;
	char base_from[12] = "00123456789";
	char base_to[11] = "0123456789";
	if (ac == 3)
		convert_base_to_10_2(atoi(av[1]), atoi(av[2]));
	/*
	if (end != NULL){
		printf("%s\n", end);
	}
	*/
}
