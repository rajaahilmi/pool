/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhilmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 00:43:22 by rhilmi            #+#    #+#             */
/*   Updated: 2023/09/16 15:46:37 by rhilmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print(int a, int b)
{
	char	s;
	char	t;
	char	r;
	char	m;

	s = a / 10 + '0';
	t = a % 10 + '0';
	r = b / 10 + '0';
	m = b % 10 + '0';
	write(1, &s, 1);
	write(1, &t, 1);
	write(1, " ", 1);
	write(1, &r, 1);
	write(1, &m, 1);
	if (a != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a, b);
			b++;
		}
		a++;
	}
}
