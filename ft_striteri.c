#include "libft.h"

void	to_upper(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
int	main()
{
	char	s[] = "ahla w Sahla";

	printf("Before :%s\n", s);
	ft_striteri(s, to_upper);
	//printf("After  :%s\n",s);
}*/
