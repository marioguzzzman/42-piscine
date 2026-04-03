/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguzman <maguzman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:40:12 by maguzman          #+#    #+#             */
/*   Updated: 2026/03/23 10:50:28 by maguzman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str);
/*
int	main(void)
{
	char	*s;

	s = "abc";
	ft_str_is_uppercase(s);
	printf("only a %d\n", ft_str_is_uppercase(s));

	s = "ABC";
	ft_str_is_uppercase(s);
	printf("only CAP  %d\n", ft_str_is_uppercase(s));
	
	s = "aBC";
	ft_str_is_uppercase(s);
	printf("mix  %d\n", ft_str_is_uppercase(s));
	
	s = "";
	ft_str_is_uppercase(s);
	printf("empty  %d\n", ft_str_is_uppercase(s));

	return 0;
}*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
