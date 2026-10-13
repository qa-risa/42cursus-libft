/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:23:57 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/17 04:34:17 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

// int	main(void)
// {
// 	int		*ft_nums;
// 	int		*libc_nums;
// 	void	*ft_zero;
// 	void	*libc_zero;

// 	ft_nums = (int *)ft_calloc(3, sizeof(int));
// 	libc_nums = (int *)calloc(3, sizeof(int));
// 	ft_zero = ft_calloc(0, 100);
// 	libc_zero = calloc(0, 100);
// 	printf("zeroed cmp:%d\n", memcmp(ft_nums, libc_nums, 3 * sizeof(int)));
// 	printf("zero-size ft:%d libc:%d\n", ft_zero != NULL, libc_zero != NULL);
// 	free(ft_nums);
// 	free(libc_nums);
// 	free(ft_zero);
// 	free(libc_zero);
// 	return (0);
// }
