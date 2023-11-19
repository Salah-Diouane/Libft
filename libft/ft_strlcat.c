/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:34:15 by sdiouane          #+#    #+#             */
/*   Updated: 2023/11/12 15:55:18 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char	*dest, const char	*src, size_t	size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if ((!dest && !size) || !size)
		return (ft_strlen(src));
	while (dest[j] && j < size)
		j++;
	while (src[i] && size && (j + i) < size - 1)
	{
		dest[j + i] = src[i];
		i++;
	}
	if (j < size)
		dest[j + i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (j + i);
}
