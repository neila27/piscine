/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuminov <nmuminov@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:59:43 by nmuminov          #+#    #+#             */
/*   Updated: 2022/09/04 17:15:02 by nmuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	write(1, "P", 1);
	else 
		write(1, "N", 1);
}

int	main()
{
	int n = 25;
	int v = 0;
	int l = -11;
	ft_is_negative(n);
	ft_is_negative(v);
	ft_is_negative(l);
	return(0);
}
	
