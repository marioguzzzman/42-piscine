/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguzman <maguzman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 09:59:53 by maguzman          #+#    #+#             */
/*   Updated: 2026/03/23 10:41:51 by maguzman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
/*
int	main(void)
{
	int	n;
	char	dest[10];
	char	*src;

	src = "hello";
	n = 2;
	ft_strncpy(dest, src, n);
	printf("dest: %s\n", dest);
	strncpy(dest, src, n);
	printf("dest real: %s\n", dest);

	n = 10;
    ft_strncpy(dest, src, n);
    printf("dest: %s\n", dest);
	strncpy(dest, src, n);
    printf("dest real: %s\n", dest);

	return (0);
}*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
