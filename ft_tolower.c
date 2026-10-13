/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 23:55:18 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/13 17:50:48 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int	main(void)
// {
// 	printf("ft:%c libc:%c\n", ft_tolower('A'), tolower('A'));
// 	printf("ft:%c libc:%c\n", ft_tolower('z'), tolower('z'));
// 	printf("ft:%c libc:%c\n", ft_tolower('7'), tolower('7'));
// 	return (0);
// }
