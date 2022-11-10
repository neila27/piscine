/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuminov <nmuminov@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:58:34 by nmuminov          #+#    #+#             */
/*   Updated: 2022/09/21 19:05:55 by nmuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		i = nb * ft_recursive_factorial(nb - 1);
	return (i);
}

int	main(int argc, char **argv)
{
	if  (argc == 2)
		printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
}
