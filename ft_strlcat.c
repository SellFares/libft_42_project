/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 22:04:45 by fsellami          #+#    #+#             */
/*   Updated: 2026/07/30 19:30:06 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	j;
	unsigned int	i;
	size_t			len_dest;
	size_t			len_src;

	i = 0;
	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dest)
		return (size + len_src);
	j = len_dest;
	while (src[i] && (j + 1) < size)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (len_dest + len_src);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst1[20] = "Hello ";
	char	dst2[10] = "Hi ";
	char	dst3[10] = "XXXX";

	// Test 1: Enough space to concatenate
	printf("Test 1\n");
	printf("Return: %zu\n", ft_strlcat(dst1, "World!", sizeof(dst1)));
	printf("Result: \"%s\"\n\n", dst1);

	// Test 2: Not enough space (truncation)
	printf("Test 2\n");
	printf("Return: %zu\n", ft_strlcat(dst2, "Hello World!", sizeof(dst2)));
	printf("Result: \"%s\"\n\n", dst2);

	// Test 3: size smaller than existing string length
	printf("Test 3\n");
	printf("Return: %zu\n", ft_strlcat(dst3, "ABC", 2));
	printf("Result: \"%s\"\n\n", dst3);

	return (0);
}

*/
