/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 20:48:06 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/07 14:23:02 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t num)
{
	size_t			n;
	unsigned char	*p;

	n = 0;
	p = (unsigned char *)ptr;
	while (n < num)
		p[n++] = (unsigned char)val;
	return (ptr);
}
/* int main(void)
{
    char str[10] = "abcdef";

    ft_memset(str + 2, 'X', 3);
    printf("Result: %s\n", str);

    return 0;
} */