/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:37:29 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:49:45 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s1) + 1;
	copy = (char *)malloc(len);
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy, s1, len);
	return (copy);
}

// int	main(void)
// {
// 	char	*ft_copy;
// 	char	*libc_copy;

// 	ft_copy = ft_strdup("libft");
// 	libc_copy = strdup("libft");
// 	printf("ft:%s libc:%s cmp:%d\n", ft_copy, libc_copy, strcmp(ft_copy,
// 			libc_copy));
// 	free(ft_copy);
// 	free(libc_copy);
// 	return (0);
// }
