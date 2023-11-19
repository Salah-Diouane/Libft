/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:24:59 by sdiouane          #+#    #+#             */
/*   Updated: 2023/11/05 06:05:15 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		d = (char *)dst;
		s = (char *)src;
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d = (char *) dst + (len - 1);
		s = (char *) src + (len - 1);
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}
