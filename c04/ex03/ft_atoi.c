/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhilmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:39:20 by rhilmi            #+#    #+#             */
/*   Updated: 2023/09/27 00:55:07 by rhilmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_atoi(char	*str)
{
	int	i;
	int	mcount;
	int	res;

	i = 0;
	mcount = 1;
	res = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\n' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			mcount *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{	
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * mcount);
}
