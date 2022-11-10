/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lherve <lherve@student.42lausanne>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:32:59 by lherve            #+#    #+#             */
/*   Updated: 2022/09/05 17:35:57 by lherve           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(int argc, char **argv)
{
	char		dest[50];
	char		dest_ok[50];
	char		*result;
	char		*result_ok;

	(void) argc;
	strcpy(dest, argv[1]);
	strcpy(dest_ok, argv[1]);
	result = ft_strcat(dest, argv[2]);
	result_ok = strcat(dest_ok, argv[2]);
	printf("ft_strcat(dest, \"%s\") = \"%s\"", argv[2], result);
	printf(" ; len = %lu\n", strlen(dest));
	printf("strcat(dest, \"%s\") = \"%s\"", argv[2], result_ok);
	printf(" ; len = %lu\n", strlen(dest_ok));
	return (0);
}
