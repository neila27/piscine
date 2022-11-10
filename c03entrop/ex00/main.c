/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lherve <lherve@student.42lausanne>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:06:51 by lherve            #+#    #+#             */
/*   Updated: 2022/09/05 13:12:01 by lherve           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int	ft_res;
	int	res;

	(void) argc;
	ft_res = ft_strcmp(argv[1], argv[2]);
	res = strcmp(argv[1], argv[2]);
	printf("ft_strcmp(\"%s\", \"%s\") = %d\n", argv[1], argv[2], ft_res);
	printf("strcmp(\"%s\", \"%s\") = %d\n", argv[1], argv[2], res);
	return (0);
}
