#include <unistd.h>

void	putnbr(int nb)
{
	if (nb >= 10)
		putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int	main(void)
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		if (n % 5 == 0 && n % 3 == 0)
			write(1, "fizzbuzz", 8);
		else if (n % 5 == 0)
			write(1, "buzz", 4);
		else if (n % 3 == 0)
			write(1, "fizz", 4);
		else
			putnbr(n);
        write(1, "\n", 2);
        n += 1;
	}
	return (0);
}

/*
Given an integer n, for every positive integer i <= n, the task is to print,

	"FizzBuzz" if i is divisible by 3 and 5,
	"Fizz" if i is divisible by 3,
	"Buzz" if i is divisible by 5
	"i" as a string, if none of the conditions are true.
*/