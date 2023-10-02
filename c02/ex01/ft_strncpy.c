/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhilmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:11:27 by rhilmi            #+#    #+#             */
/*   Updated: 2023/09/23 20:15:48 by rhilmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	c;

	c = 0;
	while (n > 0 && src[c] != '\0')
	{	
		dest[c] = src[c];
		c++;
		n--;
	}
	while (n > 0)
	{
			dest[c] = '\0';
			n--;
			c++;
	}
	return (dest);
}