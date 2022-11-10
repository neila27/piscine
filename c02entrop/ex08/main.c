/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuminov <nmuminov@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:25:40 by nmuminov          #+#    #+#             */
/*   Updated: 2022/09/06 19:31:42 by nmuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strlowcase(char *str);

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", ft_strlowcase(argv[1]));
	return (0);
}
