/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:37:58 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/15 18:20:59 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = 0;
	src_len = ft_strlen(src);
	while (dst_len < dstsize && dst[dst_len] != '\0')
		dst_len++;
	if (dst_len == dstsize)
		return (dstsize + src_len);
	while (src[i] != '\0' && dst_len + i + 1 < dstsize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	char	ft_dst[16] = "hello";
// 	char	libc_dst[16] = "hello";
// 	size_t	ft_ret;
// 	size_t	libc_ret;

// 	ft_ret = ft_strlcat(ft_dst, "!", sizeof(ft_dst));
// 	libc_ret = strlcat(libc_dst, "!", sizeof(libc_dst));
// 	printf("ret ft:%zu libc:%zu\n", ft_ret, libc_ret);
// 	printf("dst ft:%s libc:%s cmp:%d\n", ft_dst, libc_dst, memcmp(ft_dst,
// 			libc_dst, sizeof(ft_dst)));
// 	return (0);
// }
