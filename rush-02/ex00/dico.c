/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dico.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuminov <nmuminov@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:57:31 by nmuminov          #+#    #+#             */
/*   Updated: 2022/09/18 15:57:34 by nmuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char	*read_file(const char *path)
{
	unsigned int	size;
	int				file_des;
	int				result;
	char			tmp;
	char			*buf;

	file_des = open(path, O_RDONLY);
	size = 0;
	while (read(file_des, &tmp, 1))
		size++;
	close(file_des);
	buf = malloc(size + 1);
	if (buf == NULL)
		return (NULL);
	file_des = open(path, O_RDONLY);
	result = read(file_des, buf, size);
	close(file_des);
	buf[size] = 0;
	if (result > 0)
		return (buf);
	else
		return (NULL);
}
