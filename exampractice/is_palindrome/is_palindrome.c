#include <unistd.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

int is_palindrome(char *str)
{
    int j;
    int i;
    int len;

    j = 0;
    i = 0;

    len = ft_strlen(str) - 1;

    while (str[i])
    {
        if (str[i] == str[len])
        {
            len--;
            i++;   
        }
        else
        {
            write(1, "\n", 1);
            return (1);
        }
    }
    
    while (j <= i)
    {
        write(1, &str[j], 1);
        j++;
    }
    str[j] = '\0';
    write(1, "\n", 1); 
    return (0);
}

int main(void)
{
    char str[] = "radar";
    is_palindrome(str);

    char str2[] = "pepitp";
    is_palindrome(str2);
    return 0;
}