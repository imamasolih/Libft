/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:10:15 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/07 14:42:02 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *srch, size_t n)
{
	size_t	i;
	size_t	j;

	if (!(*srch))
		return ((char *)big);
	i = 0;
	while (n > i && big[i])
	{
		j = 0;
		while (big[i + j] && srch[j] && i + j < n && big[i + j] == srch[j])
			j++;
		if (!srch[j])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

/* int main(void)
{
    const char *haystack = "Hello, world!";
    const char *needle = "world";

    char *res = ft_strnstr(haystack, needle, 10);
    if (res)
        printf("Found: %s\n", res);
    else
        printf("Not found within 10 characters\n");

    res = ft_strnstr(haystack, needle, 13);
    if (res)
        printf("Found: %s\n", res);
    else
        printf("Not found within 13 characters\n");

    return 0;
} */