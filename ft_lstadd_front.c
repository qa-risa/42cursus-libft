/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 12:53:03 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:46:26 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*node;

// 	lst = ft_lstnew("second");
// 	node = ft_lstnew("first");
// 	if (lst == NULL || node == NULL)
// 		return (1);
// 	ft_lstadd_front(&lst, node);
// 	printf("%s\n", (char *)lst->content);
// 	printf("%s\n", (char *)lst->next->content);
// 	free(lst->next);
// 	free(lst);
// 	return (0);
// }
