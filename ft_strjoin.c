/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 14:44:01 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/07 14:33:36 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	char	*temp;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ret = (char *)malloc(s1_len + s2_len + 1);
	if (!ret)
		return (NULL);
	temp = ret;
	while (*s1)
		*temp++ = *s1++;
	while (*s2)
		*temp++ = *s2++;
	*temp = '\0';
	return (ret);
}

/* int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *joined = ft_strjoin(s1, s2);

    if (joined)
        printf("Joined: %s\n", joined);
    else
        printf("ft_strjoin returned NULL\n");

    free(joined);

    return 0;
} */