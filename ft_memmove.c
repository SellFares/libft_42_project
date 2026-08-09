/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 19:51:41 by fsellami          #+#    #+#             */
/*   Updated: 2026/07/31 22:59:28 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	s = src;
	d = dest;
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "Learningisfun";
    char str2[100] = "Learningisfun";
    char str3[100] = "Learningisfun";

    printf("Original string : %s\n", str1);

    // Using memcpy on first copy
    memcpy(str1 + 8, str1, 10);
    printf("memcpy overlap  : %s\n", str1);

    // Using memmove on second independent copy
    memmove(str2 + 8, str2, 10);
    printf("original : memmove overlap : %s\n", str2);
    ft_memmove(str3 + 8, str3, 10);
    printf("Mine : memmove overlap : %s\n", str3);
    return 0;
}
*/
