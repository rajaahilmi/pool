/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhilmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:42:05 by rhilmi            #+#    #+#             */
/*   Updated: 2023/10/05 21:03:31 by rhilmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define FALSE 0
# define TRUE 1
# define EVEN(x) x % 2 ==0
# define SUCCESS 0
# define EVEN_MSG "I have an even number of argumnets.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCES 0

typedef int	t_bool;

#endif
