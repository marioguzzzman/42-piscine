#include <unistd.h>

int main(int ac, char *av[])
{
	int	i;
    char *str;

	i = 0;
    str = av[1];
	if (ac != 2)
    {
        write(1, "\n", 1);
        return (1);
    }
    else
    {
		while (str[i] == ' ' || str[i] == '\t')
                i++;

		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			write(1, &str[i], 1);
            i++;
		}
        
    }
    write(1, "\n", 1);
	return (0);
}
