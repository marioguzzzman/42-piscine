/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguzman <maguzman@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:37:44 by maguzman          #+#    #+#             */
/*   Updated: 2026/03/23 17:23:26 by maguzman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "he llo";
	s2 = "he llo";
	printf("should be 0 %d\n", ft_strcmp(s1, s2));
	s1 = "hellworldo";
	s2 = "hell o";
	printf("should be positive %d\n", ft_strcmp(s1, s2));
	s1 = "hello";
	s2 = "hellohello";
	printf("should be negative %d\n", ft_strcmp(s1, s2));
	return (0);
}*/
