/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhilmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 22:13:32 by rhilmi            #+#    #+#             */
/*   Updated: 2023/09/15 23:26:29 by rhilmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print(char r, char v, char m)
{
	write(1, &r, 1);
	write(1, &v, 1);
	write(1, &m, 1);
}

void	ft_print_comb(void)
{
	char	r ;
	char	v ;
	char	m ;

	r = '0';
	while (r <= '7')
	{
		v = r + 1;
		while (v <= '8')
		{
			m = v + 1;
			while (m <= '9')
			{
				print(r, m, v);
				if (r != '7')
				{
					write(1, ", ", 2);
				}
				m++;
			}
				v++;
		}
		r++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
