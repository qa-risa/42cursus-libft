/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 20:52:38 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:45:30 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// int	main(void)
// {
// 	printf("ft:%d libc:%d\n", ft_isalpha('A'), !!isalpha('A'));
// 	printf("ft:%d libc:%d\n", ft_isalpha(' '), !!isalpha(' '));
// 	printf("ft:%d libc:%d\n", ft_isalpha('7'), !!isalpha('7'));
// 	return (0);
// }
