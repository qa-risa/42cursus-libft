/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:11:55 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:46:48 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = ft_lstnew("one");
// 	lst->next = ft_lstnew("two");
// 	printf("%s\n", (char *)ft_lstlast(lst)->content);
// 	free(lst->next);
// 	free(lst);
// 	return (0);
// }
