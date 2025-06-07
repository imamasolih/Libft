/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 21:15:07 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/07 14:14:47 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	const unsigned char	*c;

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
/* 
int main(void)
{
    char str[] = "Heeello";
    char *p = ft_memchr(str, 'l', 5);

    if (p)
        printf("Found 'l' at index %ld\n", p - str);
    else
        printf("'l' not found\n");

    return 0;
} */
