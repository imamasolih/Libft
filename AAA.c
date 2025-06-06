#include "libft.h"
#include <stdio.h>
#include <string.h>

static void	ft_nbwrite(int nb, int val)
{
	int		i;
	char	c;

	i = 1;
	while (i <= nb)
		i *= 10;
	i /= 10;
	while (i > 0)
	{
		c = (nb / i) + '0';
		write(val, &c, 1);
		nb = nb % i;
		i = i / 10;
	}
}

static void	ft_nbwrite(int nb, int fd) // suggested
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
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	ft_nbwrite(n, fd);
}




void	ft_putnbr_fd(int n, int fd) // suggested
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




















int	main(void)
{
	int n = 2147483647;
	ft_putnbr_fd(n, 1);
	return (0);
}