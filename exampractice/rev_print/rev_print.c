#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int	i;
    int last;

	i = 0;
    while (str[i])
		i++;

	last = i - 1;
	while (last >= 0)
		write(1, &str[last--], 1);
		
	write(1, "\n", 1);
	return (str);
}

int main(int argc, char **argv)
{
	if (argc == 2)
    	ft_rev_print(argv[1]);
    return 0;
}
