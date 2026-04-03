/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguzman <maguzman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 15:35:25 by maguzman          #+#    #+#             */
/*   Updated: 2026/03/20 10:13:00 by maguzman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	nchar;

	nchar = 0;
	while (str[nchar] != '\0')
	{
		nchar++;
	}
	return (nchar);
}

int	main(void)
{
	char *str;

	str = "hello";
	ft_strlen(str);
	return (0);
}
