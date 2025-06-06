/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:06:11 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/06 17:31:28 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_nbwrite(int nb, int fd)
{
	int		div;
	char	c;

	div = 1;
	while (nb / div >= 10)
		div *= 10;
	while (div > 0)
	{
		c = (nb / div) % 10 + '0';
		write(fd, &c, 1);
		div /= 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	ft_nbwrite(n, fd);
}
