/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 20:57:49 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:45:46 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int	main(void)
// {
// 	printf("ft:%d libc:%d\n", ft_isdigit('0'), !!isdigit('0'));
// 	printf("ft:%d libc:%d\n", ft_isdigit(' '), !!isdigit(' '));
// 	printf("ft:%d libc:%d\n", ft_isdigit('a'), !!isdigit('a'));
// 	return (0);
// }
