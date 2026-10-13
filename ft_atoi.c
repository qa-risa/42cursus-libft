/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:21:37 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/16 22:15:54 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_overflow(long result, char c)
{
	int	digit;

	digit = c - '0';
	if (result > LONG_MAX / 10)
		return (1);
	if (result == LONG_MAX / 10 && digit > LONG_MAX % 10)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (ft_is_overflow(result, *str))
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		result = result * 10 + (*str - '0');
		str++;
	}
	return ((int)(result * sign));
}

// int	main(void)
// {
// 	printf("ft:%d libc:%d\n", ft_atoi("42"), atoi("42"));
// 	printf("ft:%d libc:%d\n", ft_atoi(" \t\n-42abc"), atoi(" \t\n-42abc"));
// 	printf("ft:%d libc:%d\n", ft_atoi("+-10"), atoi("+-10"));
// 	return (0);
// }
