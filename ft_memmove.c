/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:39:11 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:49:05 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d > s)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

// int	main(void)
// {
// 	char	ft_buf[16] = "abcdef";
// 	char	libc_buf[16] = "abcdef";

// 	ft_memmove(ft_buf + 2, ft_buf, 4);
// 	memmove(libc_buf + 2, libc_buf, 4);
// 	printf("ft:%s libc:%s cmp:%d\n", ft_buf, libc_buf, memcmp(ft_buf, libc_buf,
// 			sizeof(ft_buf)));
// 	return (0);
// }
