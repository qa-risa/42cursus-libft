/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:26:58 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:48:50 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = (const unsigned char *)s;
	while (n > 0)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("ft:%s libc:%s\n", (char *)ft_memchr("hello", 'l', 5),
// 		(char *)memchr("hello", 'l', 5));
// 	printf("ft:%s libc:%s\n", (char *)ft_memchr("hello", 'x', 5),
// 		(char *)memchr("hello", 'x', 5));
// 	printf("ft:%s libc:%s\n", (char *)ft_memchr("hello", '\0', 6),
// 		(char *)memchr("hello", '\0', 6));
// 	return (0);
// }
