/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:39:33 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:50:20 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i] || s1[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("ft:%d libc:%d\n", ft_strncmp("abc", "abc", 3), strncmp("abc", "abc",
// 			3));
// 	printf("ft:%d libc:%d\n", ft_strncmp("abc", "abd", 3), strncmp("abc", "abd",
// 			3));
// 	printf("ft:%d libc:%d\n", ft_strncmp("abc", "abd", 2), strncmp("abc", "abd",
// 			2));
// 	return (0);
// }
