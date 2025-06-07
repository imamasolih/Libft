/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 12:59:13 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/07 14:39:05 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;

	n = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (n < (size - 1) && src[n])
	{
		dst[n] = src[n];
		n++;
	}
	dst[n] = 0;
	return (ft_strlen(src));
}

/* int main(void)
{
    char dst[10];
    const char *src = "Hello, world!";
    size_t copied = ft_strlcpy(dst, src, 10);

    printf("Copied string: %s\n", dst);
    printf("Return value (length of src): %zu\n", copied);

    return 0;
} */