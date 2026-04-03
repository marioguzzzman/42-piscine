/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguzman <maguzman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 13:48:32 by maguzman          #+#    #+#             */
/*   Updated: 2026/03/20 10:06:43 by maguzman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b; 
	*b = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 20;
	printf("ptr 'a' points to: %p, has value of %d\n", &a, a);
	printf("ptr 'b' points to: %p, has value of %d\n", &b, b);

	ft_swap(&a, &b); 
	printf("ptr 'a' points to: %p,but now the value is %d\n", &a, a);
	printf("ptr 'b' points to: %p,but now the value is %d\n", &b, b);	
	return (0);
}
