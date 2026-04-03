/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguzman <maguzman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:14:36 by maguzman          #+#    #+#             */
/*   Updated: 2026/03/23 12:50:29 by maguzman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str);
/*
int	main(void)
{
	printf("%d\n", ft_str_is_printable("8"));
	printf("%d\n", ft_str_is_printable("127"));
	printf("%d\n", ft_str_is_printable("\0"));
	printf("%d\n", ft_str_is_printable(""));
}*/

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str > 31 && *str < 127))
			return (0);
		str++;
	}
	return (1);
}
