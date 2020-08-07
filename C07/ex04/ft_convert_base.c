#include "ft_convert_base_2.c"
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
		nb += remainder * ft_iterative_power(base, i);
		nbr /= 10;
		i++;
	}
	printf("%d", nb);
	return nb;
}

int convert_base_to_10(char *nbr, char *base_from){
	int nb;
	int size_b;
	int size_nbr;
	int i;

	size_b = ft_strlen(base_from);
	size_nbr = ft_strlen(nbr) - 1;
	nb = 0;
	i = 0;
	while(nbr[i]){
		nb += (nbr[i] - 48) * ft_iterative_power(size_b, size_nbr - i); 
		i++;
	}
	return nb;
}
char *convert_10_to_base(int nbr, char *base_to){
	int remainder;
	char *nb;
	int i;
	int size_b;

	size_b = ft_strlen(base_to);

	if (!(nb = malloc(sizeof(char) * (size_malloc_base_10_to_b(nbr, size_b) + 1))))
		return ((void *) 0);
	i = 0;
	remainder = 0;
	while(nbr != 0){
		remainder = nbr % size_b;
		nb[i] = base_to[remainder];
		nbr /= size_b;
		i++;
	}
	nb[i] = '\0';
	nb = ft_reverse_char(nb);
	return nb;
}

char 	*ft_convert_base(char *nbr, char *base_from, char *base_to){
	int nb;
	if(!(is_base_valid(base_from) && is_base_valid(base_to) && nbr_is_in_base_from(nbr, base_from)))
		return ((void *) 0);
	
	nb = convert_base_to_10(nbr, base_from);
	nbr = convert_10_to_base(nb, base_to);	
	return nbr;
}


int main(int ac, char *av[]){
	char nbr[11] = "0123456789";
	char *end;
	char base_from[12] = "00123456789";
	char base_to[11] = "0123456789";
	if (ac == 4)
		printf("%s", ft_convert_base(av[1], av[2], av[3]));
	/*
	if (end != NULL){
		printf("%s\n", end);
	}
	*/
}
