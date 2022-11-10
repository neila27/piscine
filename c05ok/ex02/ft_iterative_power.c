/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuminov <nmuminov@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:21:57 by nmuminov          #+#    #+#             */
/*   Updated: 2022/09/12 15:53:03 by nmuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	f;

	f = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			f = f * nb;
			power--;
		}
	}
	return (f);
}

/*int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}*/
