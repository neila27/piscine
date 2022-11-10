/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lherve <lherve@student.42lausanne>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:32:59 by lherve            #+#    #+#             */
/*   Updated: 2022/09/05 17:50:29 by lherve           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(int argc, char **argv)
{
	char		dest[50];
	char		dest_ok[50];
	char		*result;
	char		*result_ok;
	int			n;

	(void) argc;
	strcpy(dest, argv[1]);
	strcpy(dest_ok, argv[1]);
	n = atoi(argv[3]);
	result = ft_strncat(dest, argv[2], n);
	result_ok = strncat(dest_ok, argv[2], n);
	printf("ft_strncat(dest, \"%s\", %d) = \"%s\"", argv[2], n, result);
	printf(" ; len = %lu\n", strlen(dest));
	printf("strncat(dest, \"%s\", %d) = \"%s\"", argv[2], n, result_ok);
	printf(" ; len = %lu\n", strlen(dest_ok));
	return (0);
}
