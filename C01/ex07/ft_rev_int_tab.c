/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguzman <maguzman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:49:50 by maguzman          #+#    #+#             */
/*   Updated: 2026/03/20 10:15:49 by maguzman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);


int	main(void)
{
	int	size;
	int	tab[] = {1,2,3,4,5,6,7,8,9};
	int	i;

	size = 9;
	i = 0;
	ft_rev_int_tab(tab, size);
	while(i < size)
          {
		printf("%d", tab[i]);
		i++;       
	  }
	return (0);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
