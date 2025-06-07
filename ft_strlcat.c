/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:32:57 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/07 15:05:17 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	dst_len;

	if ((!dst || !src) && size == 0)
		return (0);
	n = 0;
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (size + ft_strlen(src));
	while ((dst_len + n) < (size - 1) && src[n])
	{
		dst[dst_len + n] = src[n];
		n++;
	}
	if (dst_len < size)
		dst[dst_len + n] = 0;
	return (dst_len + ft_strlen(src));
}

/* int main(void)
{
    char dst[20] = "Hello, ";
    char *src = "world!";
    size_t result = ft_strlcat(dst, src, sizeof(dst));

    printf("Result: %s\n", dst);
    printf("Return value: %zu\n", result);

    return 0;
} */