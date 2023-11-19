/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:51:56 by sdiouane          #+#    #+#             */
/*   Updated: 2023/11/05 02:33:59 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	debut;
	size_t	fin;
	char	*str;

	str = NULL;
	if (!s1 || !set)
		return (NULL);
	debut = 0;
	fin = ft_strlen(s1);
	while (s1[debut] && ft_strchr(set, s1[debut]))
		debut++;
	if (s1[debut] != '\0')
		while (s1[fin - 1] && ft_strchr(set, s1[fin - 1]))
			fin--;
	str = (char *)malloc((fin - debut) + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[debut], fin - debut + 1);
	return ((char *)(str));
}
