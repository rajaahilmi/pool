/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhilmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:26:39 by rhilmi            #+#    #+#             */
/*   Updated: 2023/09/30 15:03:50 by rhilmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (dest == NULL || src == NULL)
		return (dest);
	while (dest [i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest [i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
