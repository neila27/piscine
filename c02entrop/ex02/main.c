/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuminov <nmuminov@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:47:48 by nmuminov          #+#    #+#             */
/*   Updated: 2022/09/06 18:00:50 by nmuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_alpha("loulou lpb5"));
	printf("%d\n", ft_str_is_alpha("loulou lpb"));
	printf("%d\n", ft_str_is_alpha("louloulpb"));
	return (0);
}
