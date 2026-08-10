#include "libft.h"

int	length_int(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*behaviour_ft_itoa(int n)
{
	char	*str;
	int		len;
	int		signal;

	signal = 1;
	len = length_int(n);
	if (n < 0)
	{
		n *= -1;
		len++;
		signal = -1;
	}
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (n != 0)
	{
		str[len] = n % 10 + '0';
		len--;
		n /= 10;
	}
	if (signal == -1)
		str[len] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	else
		return (behaviour_ft_itoa(n));
}
/*
int	main()
{
	int	n = -2147483648;
	printf("string :%s\n",ft_itoa(n));
	
}*/
