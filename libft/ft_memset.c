/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:59:25 by sdiouane          #+#    #+#             */
/*   Updated: 2023/11/15 12:52:24 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void	*ft_memset(void	*b, int c, size_t	len)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (b);
}
#include <stdio.h>
int main()
{
	int i = 0;
	ft_memset(&i, 255, 4);
	ft_memset(&i, 248, 2);
	ft_memset(&i, 45, 1);
	printf("%d",i);
}