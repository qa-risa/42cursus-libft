/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 16:39:31 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/19 20:40:52 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_len(long n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	len;
	size_t	i;

	num = n;
	len = ft_num_len(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	i = len;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (i > (n < 0))
	{
		i--;
		str[i] = (char)(num % 10 + '0');
		num = num / 10;
	}
	return (str);
}

// int	main(void)
// {
// 	char	*s;

// 	s = ft_itoa(42);
// 	printf("%s\n", s);
// 	free(s);
// 	s = ft_itoa(INT_MIN);
// 	printf("%s\n", s);
// 	free(s);
// 	return (0);
// }
