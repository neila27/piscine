/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lherve <lherve@student.42lausanne>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:06:51 by lherve            #+#    #+#             */
/*   Updated: 2022/09/05 13:24:26 by lherve           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int argc, char **argv)
{
	int				ft_res;
	int				res;
	char			*a1;
	char			*a2;
	unsigned int	a3;

	(void) argc;
	a1 = argv[1];
	a2 = argv[2];
	a3 = atoi(argv[3]);
	ft_res = ft_strncmp(a1, a2, a3);
	res = strncmp(a1, a2, a3);
	printf("ft_strncmp(\"%s\", \"%s\", %u) = %d\n", a1, a2, a3, ft_res);
	printf("strncmp(\"%s\", \"%s\", %u) = %d\n", a1, a2, a3, res);
	return (0);
}
