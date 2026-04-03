/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maguzman <maguzman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 20:41:47 by maguzman          #+#    #+#             */
/*   Updated: 2026/03/28 18:09:28 by maguzman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	new_unmatch;

	i = 0;
	j = 0;
	new_unmatch = 0;
	while (str[i] && to_find[j])
	{
		if (str[i] == to_find[j])
		{
			i++;
			j++;
		}
		else
		{
			new_unmatch++; 
			i = new_unmatch; 
			j = 0;
		}
	}
	if (to_find[j] == '\0')
		return (str + new_unmatch);
	else
		return (NULL);
}

int main(int argc, char *argv[])
{
    char *result;
    
    if (argc != 3)
    {
        printf("Errror: you are missing somethiiiing\n");
        return (1);
    }
    result = ft_strstr(argv[1], argv[2]);
    printf("ft_strstr: %s\n", result);
    printf("O strstr: %s\n", strstr(argv[1], argv[2]));
    return (0);
}
