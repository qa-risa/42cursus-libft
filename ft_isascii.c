/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 23:57:38 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:45:39 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main(void)
// {
// 	printf("ft:%d libc:%d\n", ft_isascii(0), !!isascii(0));
// 	printf("ft:%d libc:%d\n", ft_isascii(127), !!isascii(127));
// 	printf("ft:%d libc:%d\n", ft_isascii(128), !!isascii(128));
// 	return (0);
// }
