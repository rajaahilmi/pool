/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhilmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:56:08 by rhilmi            #+#    #+#             */
/*   Updated: 2023/09/30 18:44:51 by rhilmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*haystack;
	char	*needle

	if (to_find[0] == '\0')
		return (str);
	while (*str != '\0')
	{
		haystack = str;
		needle = to_find;
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}	
		if (*needle == '\0')
			return (str);
		str++;
	}
	return (NULL);
}
