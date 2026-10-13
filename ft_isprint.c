/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 23:58:58 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:45:51 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main(void)
// {
// 	printf("ft:%d libc:%d\n", ft_isprint(' '), !!isprint(' '));
// 	printf("ft:%d libc:%d\n", ft_isprint('~'), !!isprint('~'));
// 	printf("ft:%d libc:%d\n", ft_isprint('\n'), !!isprint('\n'));
// 	return (0);
// }
