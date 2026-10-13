/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:36:34 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/15 18:57:10 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	while (*s != ch)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

// int	main(void)
// {
// 	printf("ft:%s libc:%s\n", ft_strchr("banana", 'n'), strchr("banana", 'n'));
// 	printf("ft:%s libc:%s\n", ft_strchr("banana", 'x'), strchr("banana", 'x'));
// 	printf("ft:%s libc:%s\n", ft_strchr("banana", '\0'), strchr("banana",
// 			'\0'));
// 	return (0);
// }
