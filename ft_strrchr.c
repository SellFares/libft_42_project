/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 19:34:18 by fsellami          #+#    #+#             */
/*   Updated: 2026/07/30 21:03:47 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(char *s, int c)
{
	char	*str;
	int		found;

	found = 0;
	str = s;
	if (s == NULL)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
		{
			str = s;
			found = 1;
		}
		s++;
	}
	if (*s == (char)c)
	{
		str = s;
		found = 1;
	}
	if (found == 0)
		return (NULL);
	else
		return (str);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    // initializing string
    char str[] = "GeeksforGeeks";

    // character to be searched
    char chr = 'k';

    // Storing pointer returned by
    char* ptr = ft_strrchr(str, chr);

    // getting the position of the character
    if (ptr) {
        printf("Last occurrence of %c in %s is at index %ld",
	chr, str, ptr - str);
    }
    // condition for character not present
    else {
        printf("%c is not present in %s ", chr, str);
    }
    return 0;
}
*/
