/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:42:33 by sdiouane          #+#    #+#             */
/*   Updated: 2023/11/17 22:32:07 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstnew(void *content)
{
	t_list	*b;

	b = (t_list *)malloc(sizeof(t_list));
	if (!b)
		return (NULL);
	b -> content = content;
	b -> next = NULL;
	return (b);
}
int main()
{
	int i = 1;
	t_list *new = ft_lstnew(&i);
	printf("%d", *(int *)new->content);
}
