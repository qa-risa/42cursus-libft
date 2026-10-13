/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:13:40 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:46:43 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// static void	print_content(void *content)
// {
// 	printf("%s ", (char *)content);
// }

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = ft_lstnew("one");
// 	if (lst == NULL)
// 		return (1);
// 	ft_lstadd_back(&lst, ft_lstnew("two"));
// 	ft_lstiter(lst, print_content);
// 	free(lst->next);
// 	free(lst);
// 	return (0);
// }
