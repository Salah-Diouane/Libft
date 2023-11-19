/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:49:51 by sdiouane          #+#    #+#             */
/*   Updated: 2023/11/05 02:19:13 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*test;

	i = 0;
	test = (char *)str;
	while (test[i] != (char)c)
	{
		if (test[i] == '\0')
			return (0);
		i++;
	}
	return (&test[i]);
}
