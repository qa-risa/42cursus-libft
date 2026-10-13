/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:14:16 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:46:55 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	if (f == NULL || del == NULL)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

// static void	*dup_content(void *content)
// {
// 	return (ft_strdup((char *)content));
// }

// static void	del_content(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*mapped;

// 	lst = ft_lstnew("one");
// 	ft_lstadd_back(&lst, ft_lstnew("two"));
// 	mapped = ft_lstmap(lst, dup_content, del_content);
// 	printf("%s %s\n", (char *)mapped->content, (char *)mapped->next->content);
// 	ft_lstclear(&mapped, del_content);
// 	free(lst->next);
// 	free(lst);
// 	return (0);
// }
