/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 00:01:15 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:50:09 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

// int	main(void)
// {
// 	printf("ft:%zu libc:%zu\n", ft_strlen(""), strlen(""));
// 	printf("ft:%zu libc:%zu\n", ft_strlen("libft"), strlen("libft"));
// 	printf("ft:%zu libc:%zu\n", ft_strlen("l\nt"), strlen("l\nt"));
// 	return (0);
// }
