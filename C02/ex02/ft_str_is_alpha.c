/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguzman <maguzman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 12:13:25 by maguzman          #+#    #+#             */
/*   Updated: 2026/03/23 10:46:02 by maguzman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') 
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str;

	str = "AbdC";
	ft_str_is_alpha(str);
	printf("%d", ft_str_is_alpha(str));
	str = "Ab3C";
	ft_str_is_alpha(str);
	printf("%d", ft_str_is_alpha(str));
	str = "a@\\]t";
	ft_str_is_alpha(str);
	printf("%d", ft_str_is_alpha(str));
	str = "";
	ft_str_is_alpha(str);
	printf("%d", ft_str_is_alpha(str));
	return (0);
}*/
