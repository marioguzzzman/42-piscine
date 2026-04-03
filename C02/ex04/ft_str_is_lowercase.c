/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguzman <maguzman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:32:11 by maguzman          #+#    #+#             */
/*   Updated: 2026/03/23 10:48:52 by maguzman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str);
/*
int	main(void)
{
	char	*s;

	s = "abc";
	ft_str_is_lowercase(s);
	printf("only a %d\n", ft_str_is_lowercase(s));

	s = "ABC";
	ft_str_is_lowercase(s);
	printf("only CAP  %d\n", ft_str_is_lowercase(s));
	
	s = "aBC";
	ft_str_is_lowercase(s);
	printf("mix  %d\n", ft_str_is_lowercase(s));
	
	s = "";
	ft_str_is_lowercase(s);
	printf("empty  %d\n", ft_str_is_lowercase(s));

	return 0;
}*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
