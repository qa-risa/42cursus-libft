/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:12:13 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:46:19 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*node;

// 	lst = ft_lstnew("one");
// 	node = ft_lstnew("two");
// 	if (lst == NULL || node == NULL)
// 		return (1);
// 	ft_lstadd_back(&lst, node);
// 	printf("%s\n", (char *)lst->next->content);
// 	free(lst->next);
// 	free(lst);
// 	return (0);
// }
