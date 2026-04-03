/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguzman <maguzman@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 13:59:11 by maguzman          #+#    #+#             */
/*   Updated: 2026/03/15 15:03:20 by maguzman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int 	div;
	int	mod;

	a = 13;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("division is %d, and remainder is %d", div, mod);
	return (0);
}*/
