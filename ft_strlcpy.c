/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 21:33:12 by fsellami          #+#    #+#             */
/*   Updated: 2026/07/29 22:04:16 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[i] != '\0' && (i + 1) < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	while (src[len])
		len++;
	return (len);
}

/*
#include <stdio.h>

int	main(void)
{
	char	dst1[20];
	char	dst2[6];
	char	dst3[10] = "XXXX";

	// Test 1: Destination is large enough
	printf("Test 1\n");
	printf("Return: %zu\n", ft_strlcpy(dst1, "Hello World!", sizeof(dst1)));
	printf("Result: \"%s\"\n\n", dst1);

	// Test 2: Destination is too small
	printf("Test 2\n");
	printf("Return: %zu\n", ft_strlcpy(dst2, "Hello World!", sizeof(dst2)));
	printf("Result: \"%s\"\n\n", dst2);

	// Test 3: size == 0
	printf("Test 3\n");
	printf("Return: %zu\n", ft_strlcpy(dst3, "Hello", 0));
	printf("Result: \"%s\"\n\n", dst3);

	return (0);
}
*/
