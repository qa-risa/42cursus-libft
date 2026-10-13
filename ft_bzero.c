/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:22:17 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:44:43 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	char	ft_buf[5] = "abcd";
// 	char	libc_buf[5] = "abcd";

// 	ft_bzero(ft_buf + 1, 2);
// 	bzero(libc_buf + 1, 2);
// 	printf("cmp:%d\n", memcmp(ft_buf, libc_buf, sizeof(ft_buf)));
// 	printf("ft  :%d,%d,%d,%d,%d\n", ft_buf[0], ft_buf[1], ft_buf[2], ft_buf[3],
// 		ft_buf[4]);
// 	printf("libc:%d,%d,%d,%d,%d\n", libc_buf[0], libc_buf[1], libc_buf[2],
// 		libc_buf[3], libc_buf[4]);
// 	return (0);
// }
