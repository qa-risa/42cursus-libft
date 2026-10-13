/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:39:50 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 18:06:52 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (i + j < len && haystack[i + j] != '\0' && needle[j] != '\0'
			&& haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("ft:%s libc:%s\n", ft_strnstr("hello world", "world", 11),
// 		strnstr("hello world", "world", 11));
// 	printf("ft:%s libc:%s\n", ft_strnstr("hello world", "world", 5),
// 		strnstr("hello world", "world", 5));
// 	return (0);
// }
