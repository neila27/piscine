/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lherve <lherve@student.42lausanne>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:01:26 by lherve            #+#    #+#             */
/*   Updated: 2022/09/02 12:06:02 by lherve           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(int argc, char **argv)
{
	char	dest[50];
	char	*result;

	(void) argc;
	dest[49] = 'Z';
	result = ft_strcpy(dest, argv[1]);
	printf("src: \"%s\", len: %lu\n", argv[1], strlen(argv[1]));
	printf("dest: \"%s\", len: %lu\n", dest, strlen(dest));
	printf("result: \"%s\", len: %lu\n", result, strlen(result));
	return (0);
}
