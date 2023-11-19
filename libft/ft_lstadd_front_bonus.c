/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:50:37 by sdiouane          #+#    #+#             */
/*   Updated: 2023/11/12 15:39:52 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL || lst = NULL || *lst = NULL)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
}
// int main()
// {
//     //int *t = malloc(4);
// 	//*t = 4;
// 	t_list *p = NULL;
// 	t_list *a = ft_lstnew(ft_strdup("hhhh"));
// 	ft_lstadd_front(NULL, a);
// }
