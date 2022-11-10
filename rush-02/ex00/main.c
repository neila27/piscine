/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuminov <nmuminov@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:55:10 by nmuminov          #+#    #+#             */
/*   Updated: 2022/09/18 16:02:34 by nmuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*read_file(const char *path);

int	main(int argc, char **argv)
{
	int		i;
	char	*dico;

	(void) argc;
	i = 0;
	dico = read_file(argv[1]);
	while (dico[i])
	{
		write(1, &dico[i], 1);
		i++;
	}
	free(dico);
	return (0);
}
