/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwane <aiwane@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:10:18 by aiwane            #+#    #+#             */
/*   Updated: 2026/05/10 23:46:12 by aiwane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	c;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr_fd((int)(num / 10), fd);
	c = (char)((num % 10) + '0');
	ft_putchar_fd(c, fd);
}

// int	main(void)
// {
// 	write(1, "ft:", 3);
// 	ft_putnbr_fd(42, 1);
// 	write(1, "\nft:", 4);
// 	ft_putnbr_fd(-2147483648, 1);
// 	return (0);
// }
