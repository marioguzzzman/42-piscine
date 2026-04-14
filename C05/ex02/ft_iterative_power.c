/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_iterative_power.c                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: maguzman <maguzman@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/14 19:34:22 by maguzman         #+#    #+#              */
/*   Updated: 2026/04/14 20:23:29 by maguzman        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

int	main(void)
{
	printf("I power: %d", ft_iterative_power(2, 3));
	return (0);
}
