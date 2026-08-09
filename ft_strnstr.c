/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 17:00:29 by fsellami          #+#    #+#             */
/*   Updated: 2026/08/01 00:04:49 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_found(const char *big, const char *little, size_t len)
{
	int		i;
	int		t;
	char	*b;

	b = (char *)big;
	i = 1;
	t = 1;
	while (little[i] && len > 0)
	{
		if (b[i] != little[i])
		{
			t = 0;
			break ;
		}
		i++;
	}
	if (t == 1 && little[i] == '\0')
		return (1);
	else
		return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (*big && len > 0)
	{
		len--;
		if (big[0] == little[0])
		{
			if (is_found(big, little, len) == 1)
				return ((char *)big);
		}
		big++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
 // char myStr[] = "The rain in Spain falls mainly on the plains";
char myStr[] = "aaabcabcd";
  char *myPtr = ft_strnstr(myStr, "cd", 9);
  if (myPtr == NULL) {
    printf("not found, %s", myPtr);
  }
  else
    printf("found, %s", myPtr);
  return 0;
}
*/
