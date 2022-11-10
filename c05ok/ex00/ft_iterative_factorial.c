/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuminov <nmuminov@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:34:06 by nmuminov          #+#    #+#             */
/*   Updated: 2022/09/12 14:57:26 by nmuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		f = f * i;
		i++;
	}		
	return (f);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
}*/
