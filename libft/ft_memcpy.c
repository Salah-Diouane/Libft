/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:30:58 by sdiouane          #+#    #+#             */
/*   Updated: 2023/11/17 15:29:53 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void	*dst, const void	*src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((char *)(dst));
}
int main()
{
	int d[4] = {1, 2, 3, 4};
	int s[4] = {111, 22222, 3, 4};
	ft_memcpy(d,s , 6);
	printf("%d     %d",d[0],d[1]);
}