/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuminov <nmuminov@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:46:35 by nmuminov          #+#    #+#             */
/*   Updated: 2022/09/04 16:55:18 by nmuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char number;
	
	number = '0';
	while(number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}

int	main()
{
	ft_print_numbers();
	return(0);
}
