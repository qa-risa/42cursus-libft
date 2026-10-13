/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:34:38 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:49:01 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	ft_dst[6];
// 	char	libc_dst[6];

// 	ft_memcpy(ft_dst, "hello", 6);
// 	memcpy(libc_dst, "hello", 6);
// 	printf("ft:%s libc:%s cmp:%d\n", ft_dst, libc_dst, memcmp(ft_dst, libc_dst,
// 			sizeof(ft_dst)));
// 	return (0);
// }
