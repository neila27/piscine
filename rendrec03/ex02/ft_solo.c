/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuminov <nmuminov@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:14:56 by nmuminov          #+#    #+#             */
/*   Updated: 2022/09/08 17:32:29 by nmuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	j;

	i = 0;
	j = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[j] != '\0')
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	return (dest);
}
