/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:28:07 by sdiouane          #+#    #+#             */
/*   Updated: 2023/11/03 18:48:32 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	n_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	else if (n == 0)
		return (1);
	while (len % 10 >= 0 && n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*tmp;
	int		i;
	int		len;

	i = 0;
	len = n_len(nbr);
	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	tmp = (char *)malloc(len + 1);
	if (tmp == NULL)
		return (NULL);
	if (nbr < 0)
	{
		tmp[0] = '-';
		nbr *= -1;
		i++;
	}
	tmp[len] = '\0';
	while (i <= len - 1)
	{
		tmp[len - 1] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (tmp);
}
