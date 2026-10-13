/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 00:08:11 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:49:18 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		*p = (unsigned char)c;
		p++;
		len--;
	}
	return (b);
}

// int	main(void)
// {
// 	char	ft_buf[6] = "abcde";
// 	char	libc_buf[6] = "abcde";

// 	ft_memset(ft_buf, 'x', 3);
// 	memset(libc_buf, 'x', 3);
// 	printf("ft:%s libc:%s cmp:%d\n", ft_buf, libc_buf, memcmp(ft_buf, libc_buf,
// 			sizeof(ft_buf)));
// 	return (0);
// }
