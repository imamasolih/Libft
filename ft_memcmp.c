/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:07:18 by imamasol          #+#    #+#             */
/*   Updated: 2025/06/07 14:16:58 by imamasol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char	*s1;
	const unsigned char	*s2;

	s1 = (const unsigned char *)ptr1;
	s2 = (const unsigned char *)ptr2;
	while (num > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		num--;
	}
	return (0);
}
/* int main(void)
{
    char a[] = "abcde";
    char b[] = "abcdf";

    int result = ft_memcmp(a, b, 5);

    if (result == 0)
        printf("Strings are equal\n");
    else if (result < 0)
        printf("a < b\n");
    else
        printf("a > b\n");
	printf("Result: %d", result);
    return 0;
} */