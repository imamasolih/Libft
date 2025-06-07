/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:05:36 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/07 14:45:15 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str);
	if (c == 0)
		return ((char *)&str[len]);
	while (len > 0)
	{
		if (str[len] == c)
			return ((char *)&str[len]);
		len--;
	}
	if (str[len] == c)
		return ((char *)&str[len]);
	return (NULL);
}

/* int main(void)
{
    const char *str = "Hello, world!";
	char c = 'w';
    char *res = ft_strrchr(str, c);

    if (res)
        printf("Last %c found at index: %ld\n", c,res - str);
    else
        printf("'o' not found\n");

    return 0;
} */