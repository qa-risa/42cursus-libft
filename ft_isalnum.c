/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 21:00:30 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:45:22 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int	main(void)
// {
// 	printf("ft:%d libc:%d\n", ft_isalnum('A'), !!isalnum('A'));
// 	printf("ft:%d libc:%d\n", ft_isalnum('9'), !!isalnum('9'));
// 	printf("ft:%d libc:%d\n", ft_isalnum(' '), !!isalnum(' '));
// 	return (0);
// }
