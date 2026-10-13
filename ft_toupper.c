/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 21:19:04 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:50:56 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int	main(void)
// {
// 	printf("ft:%c libc:%c\n", ft_toupper('a'), toupper('a'));
// 	printf("ft:%c libc:%c\n", ft_toupper('Z'), toupper('Z'));
// 	printf("ft:%c libc:%c\n", ft_toupper('7'), toupper('7'));
// 	return (0);
// }
