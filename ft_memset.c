/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 20:48:06 by imamasol          #+#    #+#             */
/*   Updated: 2025/05/28 21:47:52 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int val, size_t num)
{
	size_t n;
	unsigned char *p;

	n = 0;
	p = (unsigned char *)ptr;

	while (n < num)
		p[n++] = (unsigned char)val;

	return (ptr);
}