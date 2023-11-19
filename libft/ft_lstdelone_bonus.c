/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:29:12 by sdiouane          #+#    #+#             */
/*   Updated: 2023/11/12 15:40:03 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || !del)
		return ;
	(*del)(lst -> content);
	free(lst);
}
// void del(void *s)
// {
// 	free(s);
// }
// int main()
// {
// 	t_list *p1 = NULL;
// 	t_list *p2 = NULL;
// 	t_list *p3 = NULL;
// 	t_list *p4 = NULL;
// 	t_list *p5 = NULL;
// 	t_list *lst = p1;
// 	char *ch1 = (char *)malloc(sizeof(char));
// 	*ch1 = 's';
// 	char *ch2 = (char *)malloc(sizeof(char));
// 	*ch2 = 'a';
// 	char *ch3 = (char *)malloc(sizeof(char));
// 	*ch3 = 'l';
// 	char *ch4 = (char *)malloc(sizeof(char));
// 	*ch4 = 'a';
// 	char *ch5 = (char *)malloc(sizeof(char));
// 	*ch5 = 'h';
// 	p1 = ft_lstnew(ch1);
// 	p2 = ft_lstnew(ch2);
// 	p3 = ft_lstnew(ch3);
// 	p4 = ft_lstnew(ch4);
// 	p5 = ft_lstnew(ch5);
// 	ft_lstadd_back(&lst,p1);
// 	ft_lstadd_back(&lst,p2);
// 	ft_lstadd_back(&lst,p3);
// 	ft_lstadd_back(&lst,p4);
// 	ft_lstadd_back(&lst,p5);
// 	printf("before :\n");
// 	t_list *tmp = lst;
// 	while (tmp != NULL)
// 	{
// 		printf("%c ",*(char *)tmp->content);
// 		tmp = tmp ->next;
// 	}
// 	ft_lstdelone(p3, del);
// 		printf(" \nafter :\n");
// 	tmp = lst;
// 	while (tmp != NULL)
// 	{
// 		printf("%c ",*(char *)tmp->content);
// 		tmp = tmp ->next;
// 	}
// }
