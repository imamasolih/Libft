/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 21:15:07 by imamasol          #+#    #+#             */
/*   Updated: 2025/05/30 11:56:29 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	const unsigned char *c;

	c = (const unsigned char *)ptr;
	while (num > 0)
	{
		if (*c == (unsigned char)value)
			return ((void *)c);
		c++;
		num--;
	}
	return (NULL);
}