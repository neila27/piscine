/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuminov <nmuminov@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:27:22 by nmuminov          #+#    #+#             */
/*   Updated: 2022/09/04 16:45:22 by nmuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z';
	while(letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}

int	main()
{
	ft_print_reverse_alphabet();
	return(0);
}
		
