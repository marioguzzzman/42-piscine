/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguzman <maguzman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:38:31 by maguzman          #+#    #+#             */
/*   Updated: 2026/03/23 10:47:23 by maguzman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str);
/*
int	main(void)
{
	char	*str;

	str = "hello";	
	ft_str_is_numeric(str);
	printf("only letters %d\n", ft_str_is_numeric(str));
	
	str = "123";	
	ft_str_is_numeric(str);
	printf("only numbers %d\n", ft_str_is_numeric(str));

	str = "1ad23";	
	ft_str_is_numeric(str);
	printf("mix %d\n", ft_str_is_numeric(str));
	
	str = "";	
	ft_str_is_numeric(str);
	printf("mix %d\n", ft_str_is_numeric(str));
	return 0;
}*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
