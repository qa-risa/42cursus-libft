/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:12:58 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:46:31 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	*lst = NULL;
}

// static void	del_content(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = ft_lstnew(ft_strdup("one"));
// 	if (lst == NULL)
// 		return (1);
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("two")));
// 	ft_lstclear(&lst, del_content);
// 	printf("%p %p\n", (void *)lst, (void *)NULL);
// 	return (0);
// }
