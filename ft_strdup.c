/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:20:23 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/07 14:31:25 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*temp;
	char	*c;

	len = ft_strlen(s);
	c = (char *)malloc(len + 1);
	if (!c)
		return (NULL);
	temp = c;
	while (*s)
		*temp++ = *s++;
	*temp = '\0';
	return (c);
}

/* int main(void)
{
    char *original = "Hello, world!";
    char *copy = ft_strdup(original);

    if (copy)
        printf("Copy: %s\n", copy);
    else
        printf("ft_strdup returned NULL\n");
    free(copy);

    return 0;
} */