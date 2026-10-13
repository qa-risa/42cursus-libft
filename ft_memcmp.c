/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:33:51 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:48:56 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		n--;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("ft:%d libc:%d\n", ft_memcmp("abc", "abc", 3), memcmp("abc", "abc",
// 			3));
// 	printf("ft:%d libc:%d\n", ft_memcmp("abc", "abd", 3), memcmp("abc", "abd",
// 			3));
// 	return (0);
// }
