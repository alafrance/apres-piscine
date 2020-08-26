#include "ft_h.h"
#include <stdio.h>
void ft_display_error(char *filename){
		ft_putstr("ft_tail: ");
		ft_putstr(filename);
		ft_putstr(": ");
		ft_putstr(strerror(errno));
		ft_putchar('\n');

	
}

void ft_display_file(char *filename, int nbr_line, int nbr_line_total){
	int fd;
	char buf[1];

	fd = open(filename, O_RDONLY);

	if(fd == -1)
		ft_display_error(filename);
	else{
		while(read(fd, buf, 1))
			ft_putstr(buf);
		close(fd);
	}
}



int ft_count_chars(char *filename){
	int count;
	int fd;
	char buf[1];
	fd = open(filename, O_RDONLY);
	count = 0;
	if(fd == -1)
		ft_display_error(filename);	
	else{
		while(read(fd, buf, 1))
				count++;
	}	
	return count;

}
void ft_tail(char **array_filemane, int size, int nbr_chars){
	int i;
	int nbr_chars_total;
	i = 2;
	
	nbr_chars_total = 0;
	while(i != size){
		if(size > 2 ){
			ft_putstr("==> ");
			ft_putstr(array_filemane[i]);
			ft_putstr(" <==\n");
		}
		//if(array_filemane[0][1] == '-')
		// compter le nombre de lignes
		nbr_chars_total = ft_count_chars(array_filemane[i]);
		printf("%d\n", nbr_chars_total);
		//ft_display_file(array_filemane[i++], nbr_line, nbr_line_total);
		i++;
	}
}

void  disp_void(void){
	char buffer;

	while(read(0, &buffer, 1) != 0);
}

// il manque l'option c et malloc
int main(int ac, char **av){
	errno = 0;
	if((ac == 2 && av[1][0] == '-') || ac == 1){
		disp_void();
	}
	else if(ac > 2 && av[1][0] == '-' && ft_strlen(av[1]) == 1){
		ft_putstr("==> entrée standard <==\n");
		disp_void();
	}
	else if(ac > 2 && av[1][0] == '-' && ft_atoi(av[1]) > 0)
		ft_tail(av, ac, ft_atoi(av[1]));
	else
		ft_tail(av, ac, 10);
	return 0;
}

