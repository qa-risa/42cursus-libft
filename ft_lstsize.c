/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:11:41 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:47:06 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = ft_lstnew("one");
// 	lst->next = ft_lstnew("two");
// 	printf("%d\n", ft_lstsize(lst));
// 	free(lst->next);
// 	free(lst);
// 	return (0);
// }
