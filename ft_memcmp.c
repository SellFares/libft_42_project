/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 23:46:41 by fsellami          #+#    #+#             */
/*   Updated: 2026/07/31 00:00:19 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (!str1 || !str2 || n == 0)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    int res = 0;
    char s1[10] = "geeks";
    char s2[10] = "greeks";

    // Use memcmp() to compare s1 and s2 up to
  	// length of s1
    res = memcmp(s1, s2, 1);

    // Check the result of memcmp
    if (res > 0)
        printf("s1 is greater");
    else if (res < 0)
        printf("s2 is greater");
    else
        printf("both are equal");

    return 0;
}
*/
