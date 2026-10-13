/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 23:24:15 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/15 17:55:39 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// int	main(void)
// {
// 	char	ft_dst[4];
// 	char	libc_dst[4];
// 	size_t	ft_ret;
// 	size_t	libc_ret;

// 	ft_ret = ft_strlcpy(ft_dst, "hello", sizeof(ft_dst));
// 	libc_ret = strlcpy(libc_dst, "hello", sizeof(libc_dst));
// 	printf("ret ft:%zu libc:%zu\n", ft_ret, libc_ret);
// 	printf("dst ft:%s libc:%s cmp:%d\n", ft_dst, libc_dst, memcmp(ft_dst,
// 			libc_dst, sizeof(ft_dst)));
// 	return (0);
// }
