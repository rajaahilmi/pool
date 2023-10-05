/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhilmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 22:41:22 by rhilmi            #+#    #+#             */
/*   Updated: 2023/10/05 01:10:15 by rhilmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = malloc (sizeof (int) * (size));
	if (tab == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = min;
	while (i < max)
	{
		tab[i - min] = i;
		i++;
	}
	*range = tab;
	return (size);
}
