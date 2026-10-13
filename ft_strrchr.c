/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:40:29 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/15 19:14:43 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}

// int	main(void)
// {
// 	printf("ft:%s libc:%s\n", ft_strrchr("banana", 'a'), strrchr("banana",
// 			'a'));
// 	printf("ft:%s libc:%s\n", ft_strrchr("banana", 'x'), strrchr("banana",
// 			'x'));
// 	printf("ft:%s libc:%s\n", ft_strrchr("banana", '\0'), strrchr("banana",
// 			'\0'));
// 	return (0);
// }
