/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 02:43:04 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/05/03 02:43:07 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static void	lol(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	del (lst->content);
	free(lst);
}
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst == NULL)
		return ;
	while ((*lst) != NULL)
	{
		temp = (*lst)->next;
		lol(*lst, del);
		*lst = temp;
	}
}
