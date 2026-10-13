/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:07:49 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/16 23:52:45 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			count++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (count);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

static void	ft_free_split(char **split, size_t count)
{
	while (count > 0)
	{
		count--;
		free(split[count]);
	}
	free(split);
}

static int	ft_fill_split(char **split, char const *s, char c)
{
	size_t	i;
	size_t	word;
	size_t	len;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			len = ft_word_len(s + i, c);
			split[word] = ft_substr(s, i, len);
			if (split[word] == NULL)
			{
				ft_free_split(split, word);
				return (0);
			}
			word++;
			i = i + len;
		}
	}
	split[word] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (s == NULL)
		return (NULL);
	split = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	if (ft_fill_split(split, s, c) == 0)
		return (NULL);
	return (split);
}

// int	main(void)
// {
// 	char	**parts;
// 	size_t	i;

// 	parts = ft_split(",,one,two,,three,", ',');
// 	if (parts == NULL)
// 		return (1);
// 	i = 0;
// 	while (parts[i] != NULL)
// 	{
// 		printf("part[%zu]:%s\n", i, parts[i]);
// 		free(parts[i]);
// 		i++;
// 	}
// 	printf("count:%zu\n", i);
// 	free(parts);
// 	return (0);
// }
