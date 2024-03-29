/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkettani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:42:37 by jkettani          #+#    #+#             */
/*   Updated: 2018/11/30 16:58:12 by jkettani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tests.h"

int		main(int ac, char **av)
{
	char	*ret;
	int		n;
	int		nb_arg;


	nb_arg = 1;
	ret = NULL;
	if (ac != nb_arg + 1)
	{
		ft_putstr("Wrong number of arguments\nUsage: ./ft_memalloc_test size_t \n");
		return (-1);
	}	
	n = atoi(av[1]);
	ret = (char *)ft_memalloc(n);
	ft_putstr("ret = ");
	if (ret == NULL)
		ft_putstr("NULL");
	else
		print_bytes(ret, n);
	return (0);
}
