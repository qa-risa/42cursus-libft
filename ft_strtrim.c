/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:07:25 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:50:33 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in_set(char c, char const *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_in_set(s1[end - 1], set))
		end--;
	return (ft_substr(s1, start, end - start));
}

// int	main(void)
// {
// 	char	*s;

// 	s = ft_strtrim("  flibft\n  ", " f\n");
// 	printf("\"%s\"\n", s);
// 	free(s);
// 	s = ft_strtrim("xxx", "x");
// 	printf("\"%s\"", s);
// 	free(s);
// 	return (0);
// }
