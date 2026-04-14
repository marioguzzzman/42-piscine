/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_recursive_power.c                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: maguzman <maguzman@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/14 20:28:17 by maguzman         #+#    #+#              */
/*   Updated: 2026/04/14 20:36:52 by maguzman        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		nb = nb * ft_recursive_power(nb, (power - 1));
	return (nb);
}

int	main(void)
{
	printf("R power: %d", ft_recursive_power(5, 2));
	return (0);
}
