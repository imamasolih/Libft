/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:32:57 by imamasol          #+#    #+#             */
/*   Updated: 2025/05/29 16:27:26 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(char *c)
{
	size_t	n;

	n = 0;
	while (c[n])
		n++;
	return (n);
}
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	dst_len;

	n = 0;
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (size + ft_strlen(src));
	while ((dst_len + n) < (size - 1) && src[n])
		dst[dst_len + n] = src[n++];
	if (dst_len < size)
		dst[dst_len + n] = 0;
	return (dst_len + ft_strlen(src));
}
