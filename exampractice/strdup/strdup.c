/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguzman <maguzman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:14:31 by maguzman          #+#    #+#             */
/*   Updated: 2026/04/01 15:38:13 by maguzman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;
	int		len;

	i = 0;
	dup = 0;
	while (src[i])
		i++;
	len = i;
	dup = (char *)malloc(sizeof(char) * (len +1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(void)
{
    char source[] = "this is a string";
    char* target;
    
    target= ft_strdup(source); 

    printf("%s", target);
    free (target);
    return (0);
}
